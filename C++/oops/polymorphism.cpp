// // compile time polymorphism 
// // function overloading 
// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// class complexx{
//     int real;
//     int img;
// public:
//     complexx(int r,int i){
//         real=r;
//         img=i;
//     }
//     complexx operator +(complexx &c){
//         complexx ans(0,0);
//         ans.real=real+c.real;
//         ans.img=img+c.img;
//         return ans;
//     }

//     void display(){
//         cout<<real<<" "<<img<<"i";
//         return ;
//     }
// };
// int main(){
//     complexx c1(2,3);
//     complexx c2(4,5);

//     complexx c3=c1+c2;

//     c3.display();
// }

// runtime polymophism 
// function overriding 

#include<bits/stdc++.h>
using namespace std;
class parent{
public:
    virtual void print(){
        cout<<"parent class "<<endl;
    }
    void show(){
        cout<<"parent class "<<endl;
    }
};
class child : public parent{
public:
    void show(){
        cout<<"child class "<<endl;
    }
    void print(){
        cout<<"child class "<<endl;
    }
};
int main(){
    parent* p;
    child c;
    p=&c;// function calling done based on the objects 
    p->print();
    p->show();
}