#include<iostream>
#include<cstring>
using namespace std;
enum Team{team1, team2, nothing};
enum Role{Hu, Hisya, Kaku, Kyosya, Keima, Gin, Kin, Ou, Null};
enum a{};//81個の駒を区別する何かが欲しい(検討加速中)
class Koma{
    private:
        int x,y;
        bool isAlive;
        bool naruState;
        Team team;
        Role role;
        string name;
    public:
        void setPosition(int x, int y){//駒の初期位置を設定する関数
            this->x=x;
            this->y=y;
        }
        void setName(Role r){//駒の名前を設定する関数
            this->role=r;
            switch(r){
                    case Hu     : name='歩';break;
                    case Hisya  : name='飛';break;
                    case Kaku   : name='角';break;
                    case Kyosya : name='香';break;
                    case Keima  : name='桂';break;
                    case Gin    : name='銀';break;
                    case Kin    : name='金';break;
                    case Ou     : name='王';break;
                    case Null   : name='　';break;
                }
        }
        void setTaem(Team t){//駒がどのチームに所属しているのかを設定する関数
            this->team=t;
        }
        int getx(){//駒のx座標を返す関数
            return x;
        }
        int gety(){//駒のy座標を返す関数
            return y;
        }
        string getname(){//駒の名前を返す関数
            return name;
        }
        bool getisAlive(){//駒が生きているかを返す関数
            return isAlive;
        }
        Team getTeam(){//駒がどのチームに所属しているかを返す関数
            return team;
        }
        Role getRole(){//駒の役割を返す関数
            return role;
        }
        void Stolen(){//駒が死んでいることを記録する関数
            this->isAlive=false;
        }
        void Put(){//新しく駒が置かれたときにその駒が生きていることを記録する関数
            this->isAlive=true;
        }
        void rePut(){//最初に駒が置かれたときに成らないのでfalseを代入する関数
            this->naruState=false;
        }
        void isNaru(){//駒が成っていることを記憶して名前を変える関数
            this->naruState=true;
            switch(this->role){
                    case Hu     : name='と';break;
                    case Hisya  : name='龍';break;
                    case Kaku   : name='馬';break;
                    case Kyosya : name='金';break;
                    case Keima  : name='金';break;
                    case Gin    : name='金';break;
                    case Kin    : name='金';break;
                    case Ou     : name='王';break;
                    case Null   : name='　';break;
                }
        }
};