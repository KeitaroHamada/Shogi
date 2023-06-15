#include<iostream>
#include<cstring>
using namespace std;
enum Team{team1, team2, nothing};
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
        int getx(){
            return x;
        }
        int gety(){
            return y;
        }
        string getname(){
            return name;
        };
        void Stolen(Team wit){
                wit=nothing;
        }
        bool isNaru(Team t,int y){
            if((t==team1&&y<=2)||(t==team2&&y>=6)){
                naruState=true;
            }else{
                naruState=false;
            }
            return naruState;
        }
};