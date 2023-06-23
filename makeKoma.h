#include<iostream>
#include<cstring>
using namespace std;
enum Team{team1, team2, nothing};
enum Role{Hu, Hisya, Kaku, Kyosya, Keima, Gin, Kin, Ou, Null};//(重要)今のままだとRoleの中身を変えたときにプログラムすべてを変えないといけなくなり、変更に弱くなってしまう
class Koma{
    private:
        int x,y;
        bool Alive;
        Team team;
        Tmp tmp;//(メモ)クラスの中に別のクラスのオブジェクトをメンバ変数として持つことができる。基本Koma has tmpとなるようにする。
        void changeTeam(){//(説明)駒が取られたときにチームを変更する関数class Komaから呼び出されるヘルパ関数
            if(team==team1){
                team=team2;
            }else if(team==team2){
                team=team1;
            }
        }
    public:
        void setPosition(const int x, const int y);//(説明)駒の座標を設定する関数
        void setTaem(const Team t);//(説明)駒がどのチームに所属しているのかを設定する関数
        int getX();//(説明)駒のx座標を返す関数
        int getY();//(説明)駒のy座標を返す関数
        bool isAlive();//(説明)駒が生きているかを返す関数
        Team getTeam();//(説明)駒がどのチームに所属しているかを返す関数
        void Stolen();//(説明)駒が死んでいることを記録する関数
        void Put();//(説明)新しく駒が置かれたときにその駒が生きていることを記録する関数
};
class Tmp{
    private:
        Role role;
        string name;
        bool naruState;
    public:
        void setName(const Role r);//(説明)駒の名前を設定する関数。個人的にはコンストラクタでやりたい
        string getName();//(説明)駒の名前を返す関数
        Role getRole();//(説明)駒の役割を返す関数
        bool getnaruState();//(説明)駒の状態を返す関数
        void isNaru();//(説明)駒が成っていることを記憶して名前を変える関数
        void rePut();//(説明)最初に駒が置かれたときに成らないのでfalseを代入する関数
};