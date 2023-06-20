#include<iostream>
#include<cstring>
#include"makeKoma.h"
using namespace std;
void Koma::setPosition(const int x, const int y){
        this->x=x;
        this->y=y;
}
void Koma::setTaem(const Team t){
        this->team=t;
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
Team Koma::getTeam(){
        return team;
}
void Koma::Stolen(){
        this->isAlive=false;
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
        this->isAlive=true;
}
