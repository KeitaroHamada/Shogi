#include<iostream>
#include<cstring>
using namespace std;
enum Team{team1, team2, nothing};
enum Role{Hu, Hisya, Kaku, Kyosya, Keima, Gin, Kin, Ou, Null};
class Koma{
    private:
        int x,y;
        bool isAlive;
        bool naruState;
        Team team;
        Role role;
        string name;
    public:
        void setPosition(int x, int y){
            this->x=x;
            this->y=y;
        }
        int getx(){
            return x;
        }
        int gety(){
            return y;
        }
        string getname(){
            return name;
        };
        void Stolen(Team wit){
                wit=nothing;
        }
        bool isNaru(Team t,int y){
            if((t==team1&&y<=2)||(t==team2&&y>=6)){
                naruState=true;
            }else{
                naruState=false;
            }
            return naruState;
        }
};


void Take(Koma* p,Koma* q){
    int tmpPx = p->getx();
    int tmpPy = p->gety();
    p->setPosition(q->getx(),q->gety());
    q->setPosition(tmpPx,tmpPy);
}
void motiChange(Koma* r,Koma* i){
    Role tmpr = r->getRole();
    r->setName(i->getRole());
    i->setName(tmpr);
    r->Stolen();
    i->put();
}
void Move(Koma* A,Koma* a,Koma* B,Koma* b){
    if(B->getRole()=="Ou"){
        cout <<"You Win"<<endl;
    }
    else{
        if(A->isAlive()){
            motiCange(A,a);
        }

        Take(A,B);
        Take(a,b);

        if(B->isAlive()){
            motiChange(B,b);
        }
    }
    
}
