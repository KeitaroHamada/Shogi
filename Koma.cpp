#include<iostream>
#include<cstring>
#include"makeKoma.h"
using namespace std;
void Koma::setPosition(const int x, const int y){
            this->x=x;
            this->y=y;
}
int Koma::getx(){
        return x;
}
int Koma::gety(){
        return y;
}
bool Koma::getisAlive(){
        return isAlive;
}
void Koma::Stolen(){
        this->isAlive=false;
        k.changeTeam();//class makeroleの所にある
}
void Koma::Put(){
        this->isAlive=true;
}
