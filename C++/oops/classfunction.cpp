#include<iostream>
using namespace std;
class player{
    public:
    int hp;
    int score;
    void showhp(){
        cout<<"health is "<<hp<<endl;
    }
};

class calculator{
    public:
    int a,b;
    void addition(){
        cout<<a+b;
    }
    void subs(){
        cout<<a-b;
    }
};
int main(){
    player amit;
    amit.hp=50;
    amit.showhp();
    calculator calci;
    calci.a=50;
    calci.b=30;
    calci.addition();
    cout<<endl;
    calci.subs();
}