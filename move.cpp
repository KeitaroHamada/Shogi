#include<iostream>
#include<cstring>
using namespace std;
class Move{
    private:
        Koma k[9][9];

        void Take(Koma* p,Koma* q){
            Koma tmp=*p;
            *p=*q;
            *q=tmp;
        }
        void wincheck(Koma x){
            if(k.getRole()=="Ou"){
                cout <<"You Win"<<endl;
            }
        }
    public:
    Move(Koma* koma){
        for(int i=0;i<9;i++){
            for(int j=0;j<9;j++){
                k[i][j]=koma[i][j];
            }
        }
    }
//移動前の座標と移動後の座標を受け取り、配列の中身を入れ替える。
    void move(int x,int y,int X,int Y){
        Koma* A=k[x][y];
        Koma* C=k[X][Y];
        wincheck(*C);
        if(!A->getisAlive()){
            A->put();
        }
        if(C->getisAlive()){
            C->Stolen();
        }
        Take(A,C);
    }
}