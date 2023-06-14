#include<iostream>
#include<cstring>
using namespace std;
enum Team{team1, team2};
enum Role{Hu, Hisya, Kaku, Kyosya, Keima, Gin, Kin, Ou, Null};
class Koma{
    private:
        int x,y;
        bool Nalustate;
        Team team;
        Role role;
    public:
        int getx(){
            return x;
        };
        int gety(){
            return y;
        };
        void Steel(Team t){
            if(t==team1){
                t=team2;
            }else{
                t=team2;
            }
        };
        void isNaru(bool n, Role r){
            if(n){
                switch(r){
                    case Hu     : k[x][y]='と';break;
                    case Hisya  : k[x][y]='龍';break;
                    case Kaku   : k[x][y]='馬';break;
                    case Kyosya : k[x][y]='金';break;
                    case Keima  : k[x][y]='金';break;
                    case Gin    : k[x][y]='金';break;
                    case Kin    : k[x][y]='金';break;
                    case Ou     : k[x][y]='王';break;
                    case Null   : k[x][y]='　';break;
                }
            }
        };
};
