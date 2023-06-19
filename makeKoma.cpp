#include<iostream>
#include<cstring>
using namespace std;
enum Team{team1, team2, nothing};
enum Role{Hu, Hisya, Kaku, Kyosya, Keima, Gin, Kin, Ou, Null};//class Roleを新しく作る
class makeKoma{
    private:
        int x,y;
        bool isAlive;
        bool naruState;
        Team team;
        Role role;
        string name;
    public://ヘッダファイルにしやすいようにプロトタイプ宣言した
        void setPosition(const int x, const int y);//駒の初期位置を設定する関数
        void setName(const Role r);//駒の名前を設定する関数
        void setTaem(const Team t);//駒がどのチームに所属しているのかを設定する関数
        int getx();//駒のx座標を返す関数
        int gety();//駒のy座標を返す関数
        string getname();//駒の名前を返す関数
        bool getisAlive();//駒が生きているかを返す関数
        Team getTeam();//駒がどのチームに所属しているかを返す関数
        Role getRole();//駒の役割を返す関数
        void Stolen();//駒が死んでいることを記録する関数
        void Put();//新しく駒が置かれたときにその駒が生きていることを記録する関数
        void rePut();//最初に駒が置かれたときに成らないのでfalseを代入する関数
        void isNaru();//駒が成っていることを記憶して名前を変える関数
};
void makeKoma::setPosition(const int x, const int y){//class Role内で定義
            this->x=x;
            this->y=y;
}
void makeKoma::setName(const Role r){//class Role内で定義
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
void makeKoma::setTaem(const Team t){//class Role内で定義
        this->team=t;
}
int makeKoma::getx(){
        return x;
}
int makeKoma:: gety(){
        return y;
}
string makeKoma:: getname(){
        return name;
}
bool makeKoma:: getisAlive(){
        return isAlive;
}
Team makeKoma::getTeam(){
        return team;
}
Role makeKoma::getRole(){
        return role;
}
void makeKoma::Stolen(){
        this->isAlive=false;
}
void makeKoma::Put(){
        this->isAlive=true;
}
void makeKoma::rePut(){
        this->naruState=false;
}
void makeKoma::isNaru(){
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