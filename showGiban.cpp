#include<iostream>
#include<cstring>
#include<vector>
using namespace std;
class Field{
    private:
        vector<Koma>koma;
    public:

        void showField(){
            string kansuuji[9]={"ˆê","“ñ","ŽO","Žl","ŒÜ","˜Z","Žµ","”ª","‹ã"};
            Koma k[9][9];
            for(int i=0;i<koma.size();i++){
                k[koma[i].getx()][koma[i].gety()]=koma[i];
            }
            cout << "‚X‚W‚V‚U‚T‚S‚R‚Q‚P \n";
            for(int j=0;j<9;j++){
                for(int i=0;i<9;i++){
                    cout << k[i][j].getName();
                }
                cout << kansuuji[j] << endl;
            }
        }
};