#include<iostream>
#include<cstring>
#include"makeKoma.h"
using namespace std;
void Tmp::setName(const Role r){
        this->role=r;
        switch(r){
            case Hu     : name="歩";break;//一文字でも""でくくる
            case Hisya  : name="飛";break;
            case Kaku   : name="角";break;
            case Kyosya : name="香";break;
            case Keima  : name="桂";break;
            case Gin    : name="銀";break;
            case Kin    : name="金";break;
            case Ou     : name="王";break;
            case Null   : name="　";break;
        }
}
string Tmp::getName(){        
        return name;
}
Role Tmp::getRole(){
        return role;
}
bool Tmp::getnaruState(){
        return naruState;
}
void Tmp::isNaru(){
        switch(role){
                case Hu     : name="と";role=To;break;
                case Hisya  : name="龍";role=Ryu;break;
                case Kaku   : name="馬";role=Uma;break;
                case Kyosya : name="金";role=Kin;break;
                case Keima  : name="金";role=Kin;break;
                case Gin    : name="金";role-Kin;break;
                case Kin    : name="金";role=Kin;break;
                case Ou     : name="王";role=Kin;break;
                case Null   : name="　";role=Kin;break;
            }
}
void Tmp::rePut(){
        naruState=false;
}