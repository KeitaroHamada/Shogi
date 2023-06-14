#include<iostream>
#include<cstring>
#include<vector>
using namespace std;
enum Kansuuji{一,二,三,四,五,六,七,八,九};
class Koma{
    public:
    int getx();
    int gety();
};
class Field{
    private:
        vector<Koma>koma;
    public:
        void showField(){
            Koma first[9][9];

            cout << "９８７６５４３２１ \n";
            for(int i=0;i<koma.size();i++){
                switch(koma[i].getx()){
                    case 0 : 
                        for(int j=0;j<9;j++){
                            if(koma[i].gety()==j){
                                first[j] = 
                            }
                        }
                }
            }

        }
};
