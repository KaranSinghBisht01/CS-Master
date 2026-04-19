#include<iostream>
using namespace std;
class player{
private:
    int hp;
    int kill;

public:
    void setHealth(int hp){
        this->hp=hp;
    }
    void setKill(int kill){
        this->kill=kill;
    }
    int getHealth(){
        return hp;
    }
    int getKill(){
        return kill;
    }
};
int main(){
    player p1,p2;
    player *x1;
    player x1object=*x1;
    x1object.setHealth(80);
    cout<<x1object.getHealth();
}