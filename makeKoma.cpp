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
        int getx(){
            return x;
        };
        int gety(){
            return y;
        };
        string getName(string n){
            return n;
        };
        void Steel(Team t){
            if(t==team1){
                t=team2;
            }else{
                t=team2;
            }
        };
        void isNaru(Team t,int y){
            if(t==team1&&y<=2){
                naruState=true;
            }else if(t==team2&&y<=2){
                naruState=false;
            }
        };
        void setPosition(){
            
        }
};