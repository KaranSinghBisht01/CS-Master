#include<iostream>
#include<algorithm>
using namespace std;
class player{
    private:
    int hp;
    int score;
    bool alive;

    public:
    void sethp(int h){
        hp=h;
    }
    void setscore(int s){
        score=s;
    }
    void setisalive(bool a){
        alive=a;
    }
    int gethp(){
        return hp;
    }
    int getscore(){
        return score;
    }
    bool getisalive(){
        return alive;
    }
};
player maxhp(player x,player y){
    //return max(x.gethp(),y.gethp());
    if(x.gethp()>=y.gethp()) return x;
    else return y;
}
int scores(player x,player y){
    if(x.getscore()>y.getscore()) return x.getscore();
    else y.getscore();
}
int main(){
    player karan,kunal,raj;
    kunal.sethp(100);
    //karan.sethp(90);
    raj.sethp(99);
    
    //cout<<raj.gethp();
    karan=maxhp(kunal,raj);
    cout<<karan.gethp()<<endl;

    raj.setscore(100);
    kunal.setscore(99);

    cout<<scores(raj,kunal);

}