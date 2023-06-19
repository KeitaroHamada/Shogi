#include<iostream>
#include<cstring>
using namespace std;
enum Team{team1, team2, nothing};
enum Role{Hu, Hisya, Kaku, Kyosya, Keima, Gin, Kin, Ou, Null};
class makeRole{
    private:
        Team team;
        Role role;
        string name;
        bool naruState;
    public://ヘッダファイルにしやすいようにプロトタイプ宣言した
        void setName(const Role r);//駒の名前を設定する関数
        void setTaem(const Team t);//駒がどのチームに所属しているのかを設定する関数
        string getname();//駒の名前を返す関数
        Team getTeam();//駒がどのチームに所属しているかを返す関数
        Role getRole();//駒の役割を返す関数
        void isNaru();//駒が成っていることを記憶して名前を変える関数
        void rePut();//最初に駒が置かれたときに成らないのでfalseを代入する関数
        void changeTeam();//駒が取られたときにチームを変更する関数
};
void makeRole::setName(const Role r){
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
void makeRole::setTaem(const Team t){
        this->team=t;
}
string makeRole::getname(){
        return name;
}
Team makeRole::getTeam(){
        return team;
}
Role makeRole::getRole(){
        return role;
}
void makeRole::isNaru(){
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
void makeRole::rePut(){
        this->naruState=false;
}
void makeRole::changeTeam(){
        if(team==team1){
                team=team2;
        }else if(team==team2){
                team=team1;
        }
}
