#include<iostream>
using namespace std;
class Vehicle{
public:
    int tyresize;
    int enginesize;
    int lights;
    int seat;
    string companyname;

    void setcompanyname(string companyname){
        this->companyname=companyname;
    }
    Vehicle(){
        cout<<"Vehicle's constructor called "<<endl;
    }
};
class Bike:public Vehicle {
public:
    int handlesize;

    Bike(){
        cout<<"Bike's constructor called "<<endl;
    }
};
class Car:public Vehicle{
public:
    int steeringsize;

    Car(){
        cout<<"Car's constructor called "<<endl;
    }
};
int main(){
    Vehicle x;
    Bike GT;
    Car RANGE_ROVER;
    GT.companyname="RoyelEnfield";
    GT.enginesize=650;
    RANGE_ROVER.tyresize=18;
    cout<<GT.companyname<<endl;
}