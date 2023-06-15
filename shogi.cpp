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

void Move(Koma* A,Koma* a,Koma* B,Koma* b){

    
    int tmpAx = A->getx();
    int tmpAy = A->gety();

    int tmpax = a->getx();
    int tmpay = a->gety();

    A->setPosition(B->getx(),B->gety());
    B->setPosition(tmpAx,tmpAy);

    a->setPosition(b->getx(),b->gety());
    b->setPosition(tmpax,tmpay);

    if(B->isAlive()){
        Role tmpBR = B->getRole();
        B->setName(b->getRole());
        b->setName(tmpBR);
        B->Stolen();
        b->put();
    }
}

if(tmpb!='e'&&tmpb!='o'){//移動先を持ち駒に入れる
        *motigoma = tmpb;
    }
    if(tmpb=='o'){
        cout <<"You Win!"<<endl;
    }

int main(){
    Koma ban[9][9];
    Koma a('h');
    Koma b('k');
    Koma c('o');
    char motigoma='m';

    ban[0][3] = a;
    ban[0][2] = b;
    ban[0][1] = c;

    Move(&a,&b,&motigoma);
    cout << a.getname()<<b.getname()<<c.getname()<<motigoma<<endl;
    Move(&b,&c,&motigoma);
    cout << a.getname()<<b.getname()<<c.getname()<<motigoma<<endl;

}
