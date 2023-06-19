#include<iostream>
#include<cstring>
using namespace std;
enum Team{team1, team2, nothing};
enum Role{Hu, Hisya, Kaku, Kyosya, Keima, Gin, Kin, Ou, Null};
class Koma{
    private:
        int x,y;
        bool isAlive;
    public://ヘッダファイルにしやすいようにプロトタイプ宣言した
        void setPosition(const int x, const int y);
        int getx();//駒のx座標を返す関数
        int gety();//駒のy座標を返す関数
        bool getisAlive();//駒が生きているかを返す関数
        void Stolen();//駒が死んでいることを記録する関数
        void Put();//新しく駒が置かれたときにその駒が生きていることを記録する関数
};
void Koma::setPosition(const int x, const int y){
            this->x=x;
            this->y=y;
}
int Koma::getx(){
        return x;
}
int Koma:: gety(){
        return y;
}
bool Koma:: getisAlive(){
        return isAlive;
}
void Koma::Stolen(){
        this->isAlive=false;
        cahengeTeam();
}
void Koma::Put(){
        this->isAlive=true;
}
