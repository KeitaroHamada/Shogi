#include<iostream>
#include<cstring>
using namespace std;
enum Team{team1, team2};
enum Role{Hu, Hisya, Kaku, Kyosya, Keima, Gin, Kin, Ou, Null};
class Koma{
    private:
        int x,y;
        bool Nalustate;
        char k[9][9]; //どこで定義するの？
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
        void setPosition(){
            switch(x){
                case 0 : switch(y){
                    case 0 : k[x][y]='香';break;
                    case 1 : k[x][y]='桂';break;
                    case 2 : k[x][y]='銀';break;
                    case 3 : k[x][y]='金';break;
                    case 4 : k[x][y]='王';break;
                    case 5 : k[x][y]='金';break;
                    case 6 : k[x][y]='銀';break;
                    case 7 : k[x][y]='桂';break;
                    case 8 : k[x][y]='香';break;
                }
                case 1 : switch(y){
                    case 0 : k[x][y]='　';break;
                    case 1 : k[x][y]='飛';break;
                    case 2 : k[x][y]='　';break;
                    case 3 : k[x][y]='　';break;
                    case 4 : k[x][y]='　';break;
                    case 5 : k[x][y]='　';break;
                    case 6 : k[x][y]='　';break;
                    case 7 : k[x][y]='角';break;
                    case 8 : k[x][y]='　';break;
                }
                case 2 : switch(y){
                    case 0 : k[x][y]='歩';break;
                    case 1 : k[x][y]='歩';break;
                    case 2 : k[x][y]='歩';break;
                    case 3 : k[x][y]='歩';break;
                    case 4 : k[x][y]='歩';break;
                    case 5 : k[x][y]='歩';break;
                    case 6 : k[x][y]='歩';break;
                    case 7 : k[x][y]='歩';break;
                    case 8 : k[x][y]='歩';break;
                }
                case 3 : switch(y){
                    case 0 : k[x][y]='　';break;
                    case 1 : k[x][y]='　';break;
                    case 2 : k[x][y]='　';break;
                    case 3 : k[x][y]='　';break;
                    case 4 : k[x][y]='　';break;
                    case 5 : k[x][y]='　';break;
                    case 6 : k[x][y]='　';break;
                    case 7 : k[x][y]='　';break;
                    case 8 : k[x][y]='　';break;
                }
                case 4 : switch(y){
                    case 0 : k[x][y]='　';break;
                    case 1 : k[x][y]='　';break;
                    case 2 : k[x][y]='　';break;
                    case 3 : k[x][y]='　';break;
                    case 4 : k[x][y]='　';break;
                    case 5 : k[x][y]='　';break;
                    case 6 : k[x][y]='　';break;
                    case 7 : k[x][y]='　';break;
                    case 8 : k[x][y]='　';break;
                }
                case 5 : switch(y){
                    case 0 : k[x][y]='　';break;
                    case 1 : k[x][y]='　';break;
                    case 2 : k[x][y]='　';break;
                    case 3 : k[x][y]='　';break;
                    case 4 : k[x][y]='　';break;
                    case 5 : k[x][y]='　';break;
                    case 6 : k[x][y]='　';break;
                    case 7 : k[x][y]='　';break;
                    case 8 : k[x][y]='　';break;
                }
                case 6 : switch(y){
                    case 0 : k[x][y]='歩';break;
                    case 1 : k[x][y]='歩';break;
                    case 2 : k[x][y]='歩';break;
                    case 3 : k[x][y]='歩';break;
                    case 4 : k[x][y]='歩';break;
                    case 5 : k[x][y]='歩';break;
                    case 6 : k[x][y]='歩';break;
                    case 7 : k[x][y]='歩';break;
                    case 8 : k[x][y]='歩';break;
                }
                case 7 : switch(y){
                    case 0 : k[x][y]='　';break;
                    case 1 : k[x][y]='角';break;
                    case 2 : k[x][y]='　';break;
                    case 3 : k[x][y]='　';break;
                    case 4 : k[x][y]='　';break;
                    case 5 : k[x][y]='　';break;
                    case 6 : k[x][y]='　';break;
                    case 7 : k[x][y]='飛';break;
                    case 8 : k[x][y]='　';break;
                }
                case 8 : switch(y){
                    case 0 : k[x][y]='香';break;
                    case 1 : k[x][y]='桂';break;
                    case 2 : k[x][y]='銀';break;
                    case 3 : k[x][y]='金';break;
                    case 4 : k[x][y]='王';break;
                    case 5 : k[x][y]='金';break;
                    case 6 : k[x][y]='銀';break;
                    case 7 : k[x][y]='桂';break;
                    case 8 : k[x][y]='香';break;
                }
            }
        };
};