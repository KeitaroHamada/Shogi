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
class makeRole{
    private:
        Team team;
        Role role;
        string name;
        bool naruState;
    public://ヘッダファイルにしやすいようにプロトタイプ宣言した
        void setName(const Role r);//駒の名前を設定する関数
        void setTaem(const Team t);//駒がどのチームに所属しているのかを設定する関数
        string getname();//駒の名前を返す関数
        Team getTeam();//駒がどのチームに所属しているかを返す関数
        Role getRole();//駒の役割を返す関数
        void isNaru();//駒が成っていることを記憶して名前を変える関数
        void rePut();//最初に駒が置かれたときに成らないのでfalseを代入する関数
        void changeTeam();//駒が取られたときにチームを変更する関数class Komaから呼び出される
};