#include<iostream>
#include<cstring>
#include"makeKoma.h"
using namespace std;
void Koma::setPosition(const int x, const int y){//(重要)メンバ変数がprivateでなければいけいないようなコードを書く
        this->x=x;
        this->y=y;
}
void Koma::setTaem(const Team t){
        this->team=t;
}
int Koma::getX(){//(メモ)関数名を造語にする場合、後の語を大文字にする
        return x;
}
int Koma::getY(){
        return y;
}
bool Koma::isAlive(){
        return Alive;
}
Team Koma::getTeam(){
        return team;
}
void Koma::Stolen(){
        this->Alive=false;
        changeTeam();
}
void Koma::changeTeam(){
        if(team==team1){
                team=team2;
        }else if(team==team2){
                team=team1;
        }
}
void Koma::Put(){
        this->Alive=true;
}