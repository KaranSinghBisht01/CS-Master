#include<iostream>
using namespace std;
class GUN{
private:
    int ammo;
    int scope;
    int damage;
public:
    void setammo(int ammo){
        this->ammo=ammo;
    }
    void setdamege(int damage){
        this->damage=damage;
    }
    void setscope(int scope){
        this->scope=scope;
    }
    int getammo(){
        return ammo;
    }
    int getdamage(){
        return damage;
    }
    int getscope(){
        return scope;
    }
};
class player{
    class Helmet{ // no one can use this class,except player 
private:
    int level;
    int health;
public:
    void setLevel(int level){
        this->level=level;
    }
    void setHealth(int health){
        this->health=health;
    }
    int getHealth(){
        return health;
    }
    int getLevel(){
        return level;
    }
};
private:
    int hp;
    int kill;
    GUN gun; 
    Helmet helmet;
public:
    void sethp(int hp){
        this->hp=hp;
    }
    void setkill(int kill){
        this->kill=kill;
    }
    void setgun(GUN gun){
        this->gun=gun;
    }
    int gethp(){
        return hp;
    }
    int getkill(){
        return kill;
    }
    GUN getgun(){
        return gun;
    }
    void setHelmet(int level){
        Helmet *helmet=new Helmet;
        helmet->setLevel(level);
        int health=0;
        if(level==1) health=50;
        else if(level==2) health=75;
        else if(level==3) health=100;
        else cout<<"invalid level ";
        helmet->setHealth(health);
        this->helmet=*helmet; // this will assign value to players helmet through new helmat,dynamiclly !! 
    }
    void getHelmet(){
        cout<<helmet.getLevel()<<endl;
        cout<<helmet.getHealth();
    }
    // void getHelmet(){
    //     cout<<helmet.setHealth
    // }    
};
int main(){
    GUN m4,akm,xyz;
    player p1,p2;
    m4.setammo(50);
    m4.setscope(6);
    m4.setdamege(89);
    p1.setgun(m4);
    p1.sethp(100);
    p1.setkill(10);
    p1.setHelmet(2);
    p1.getHelmet();
    // player Helmet ;
    // Helmet.setHelmet(2);
    akm=p1.getgun();
    //cout<<akm.getammo();
    xyz=p1.getgun();
}