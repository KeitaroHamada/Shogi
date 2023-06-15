#include<iostream>
#include<cstring>
#include<vector>
using namespace std;
class Field{
    private:
        vector<Koma>koma;//長さを自由に変えられるKoma型の配列のようなもの
    public:
        void showField(){ //将棋盤を出力する関数、class Komaにはgetx(),gety(),getName()が必要
            string kansuuji[9]={"一","二","三","四","五","六","七","八","九"};
            Koma k[9][9];
            for(int i=0;i<koma.size();i++){
                k[koma[i].getx()][koma[i].gety()]=koma[i];
            }
            cout << "９８７６５４３２１ \n";
            for(int j=0;j<9;j++){
                for(int i=0;i<9;i++){
                    cout << k[i][j].getName();
                }
                cout << kansuuji[j] << endl;
            }
        }
};