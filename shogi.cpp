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
};
void Move(Koma* a,Koma* b,char* motigoma){
    char tmpa = a->getname();
    char tmpb = b->getname();
    a->setname('e');
    b->setname(tmpa);

    if(tmpb!='e'&&tmpb!='o'){//移動先を持ち駒に入れる
        *motigoma = tmpb;
    }
    if(tmpb=='o'){
        cout <<"You Win!"<<endl;
    }
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
