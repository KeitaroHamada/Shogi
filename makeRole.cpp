#include<iostream>
#include<cstring>
#include"makeKoma.h"
using namespace std;
void makeRole::setName(const Role r){
        this->role=r;
        switch(r){
            case Hu     : name='歩';break;
            case Hisya  : name='飛';break;
            case Kaku   : name='角';break;
            case Kyosya : name='香';break;
            case Keima  : name='桂';break;
            case Gin    : name='銀';break;
            case Kin    : name='金';break;
            case Ou     : name='王';break;
            case Null   : name='　';break;
        }
}
string makeRole::getname(){
        return name;
}
Role makeRole::getRole(){
        return role;
}
void makeRole::isNaru(){
        this->naruState=true;
        switch(this->role){
                case Hu     : name='と';break;
                case Hisya  : name='龍';break;
                case Kaku   : name='馬';break;
                case Kyosya : name='金';break;
                case Keima  : name='金';break;
                case Gin    : name='金';break;
                case Kin    : name='金';break;
                case Ou     : name='王';break;
                case Null   : name='　';break;
            }
}
void makeRole::rePut(){
        this->naruState=false;
}