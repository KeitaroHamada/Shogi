#include<iostream>
#include<cstring>


void Take(Koma* p,Koma* q){
    Koma tmp=*p;
    *p=*q;
    *q=tmp;
}

//駒の配列の先頭アドレス、移動前の座標と移動後の座標を受け取り、配列の中身を入れ替える。
void Move(Koma* k,int x,int y,int X,int Y){
    Koma* A=k[x][y];
    Koma* C=k[X][Y];
    if(C->getRole()=="Ou"){
        cout <<"You Win"<<endl;
    }
    else{
        if(!A->getisAlive()){
            A->put();
        }
        if(C->getisAlive()){
            C->Stolen();
        }
        Take(A,C);
        k[x][y]=A;
        k[X][Y]=C;
        
    }
    
}
