#include<iostream>
#include<cstring>
#include<vector>
using namespace std;
enum Team{nothing,team1,team2};
class Field{
    private:
        vector<Koma>koma;//長さを自由に変えられるKoma型の配列のようなもの
    public:
        void showField(){ //将棋盤を出力する関数、class Komaにはgetx(),gety(),getName(),getTeam()が必要
            string kansuuji[9]={"一","二","三","四","五","六","七","八","九"};
            Koma k[9][9];
            for(int i=0;i<koma.size();i++){
                k[koma[i].getx()][koma[i].gety()]=koma[i];
            }
            cout << "９８７６５４３２１ \n";
            for(int j=0;j<9;j++){
                for(int i=0;i<9;i++){
                    if(k[i][j].getTeam()==team1&&k[i][j].getisAlive()){
                        cout << "\x1b[33m" << k[i][j].getName() << "\x1b[0m";//もしteam1なら黄色で出力
                    }
                    else if(k[i][j].getisAlive()){cout << k[i][j].getName();}
                }
                cout << kansuuji[j] << endl;
            }
        }
        void brindField(){
            Koma b[9][9];
            for(int i=0;i<koma.size();i++){
                b[koma[i].getx()][koma[i].gety()]=koma[i];
            }
        }
};
