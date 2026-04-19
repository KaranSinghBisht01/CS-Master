#include<iostream>
using namespace std;
class bike{
public:
    int tyresize;
    int enginesize;
    static int NoOfBike;

    bike (int tyresize,int enginesize){
        this->tyresize=tyresize;
        this->enginesize=enginesize;
        cout<<"constructor created "<<endl;
    }
    ~bike(){
        cout<<"destructor called "<<endl;
    }
    static void increseNoOfBike(){
        NoOfBike++;
    }
};

int bike:: NoOfBike=10; 
int main(){
    //bike gT(int tyresize=16,int enginesize=650);
    bike GT(16,650);
    bike RoyelEnfield(15,350);
    bool x=true;
    // if(x==true){
    //     bike BMW(18,900);
    //     cout<<BMW.enginesize<<endl;
    //     cout<<BMW.tyresize<<endl;
    // }
    bike z=(RoyelEnfield);
    // cout<<GT.tyresize<<endl;
    // cout<<GT.enginesize<<endl;
    // cout<<RoyelEnfield.enginesize<<endl;
    // cout<<RoyelEnfield.tyresize<<endl;
    cout<<z.enginesize<<endl;
    // gt.enginesize=650;
    // gt.tyresize=16;
    RoyelEnfield.increseNoOfBike();
    cout<<RoyelEnfield.NoOfBike<<endl;

}