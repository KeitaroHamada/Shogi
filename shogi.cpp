#include<iostream>
#include<cstring>
using namespace std;
class Koma{
    private:
        char name;
    public:
        Koma(){}
        Koma(char n){
            name = n;
        }
        char getname(){return name;}
        void setname(char n){name = n;}
        void copy(Koma x){
            name = x.getname();
        }
};
void Move(Koma* a,Koma* b,Koma* motigoma){
    Koma tmpa(a->getname());
    Koma tmpb(b->getname());
    a->copy(tmpb);
    b->copy(tmpa);

    if(tmpb.getname()!='e'&&tmpb.getname()!='o'){//移動先を持ち駒に入れる
        motigoma copy(tmpb);
    }
    if(tmpb.getname=='o'){
        cout <<"You Win!"<<endl;
    }
}
int main(){
    Koma ban[9][9];
    Koma a('h');
    Koma b('k');
    Koma c('o');
    Koma motigoma('m');

    ban[0][3] = a;
    ban[0][2] = b;
    ban[0][1] = c;

    Move(&a,&b,&motigoma);
    cout << a.getname()<<b.getname()<<c.getname()<<endl;
    Move(&b,&c,&motigoma);
    cout << a.getname()<<b.getname()<<c.getname()<<endl;

}
