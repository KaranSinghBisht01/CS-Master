#include<iostream>
using namespace std;
class player{
    private:
    int hp;
    int score;

    public:
    //setter
    void setscore(int s){
        score=s;
    }

    void sethp(int h){
        hp=h;
    }

    //getter
    int gethp(){
        return hp;
    }

    int getscore(){
        return score;
    }

};
int main(){
    player amit;
    //amit.hp --> we cannot fatch value assign value through this operation because hp is a private data member
    amit.sethp(10);
    cout<<"amit's health is "<<amit.gethp()<<endl;
    amit.setscore(50);
    cout<<"amit's score is "<<amit.getscore()<<endl;
}