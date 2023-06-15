#include<iostream>
#include<cstring>
using namespace std;
enum Team{team1, team2};
enum Role{Hu, Hisya, Kaku, Kyosya, Keima, Gin, Kin, Ou, Null};
class Koma{
    private:
        int x,y;
        bool isAlive;
        bool naruState;
        Team team;
        Role role;
        string name;
    public:
        void setPosition(int x, int y){
            this->x=x;
            this->y=y;
        }
        void setName(Role r){
            role=r;
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
        void setTaem(Team t){
            team=t;
        }
        int getx(){
            return x;
        }
        int gety(){
            return y;
        }
        string getname(){
            return name;
        }
        bool getisAlive(){
            return isAlive;
        }
        Team getTeam(){
            return team;
        }
        void Stolen(){
            isAlive=false;
        }
        void Put(){
             isAlive=true;
        }
        void isNaru(bool naruState, Role r){
            naruState=true;
            switch(r){
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