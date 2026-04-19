#include<iostream>
using namespace std;
class A{
private:
    int aprivate;
    
protected:
    int aprotected;
public:
    int apublic;
    
    A(){
        cout<<"A's constructor called "<<endl;
    }
};
class B:public A{// It has apublic,aprotected
private:
    int bprivate;
protected:
    int bprotected;
public:
    int bpublic;
    B(){
        cout<<"B's Constructed called "<<endl;
    }
    // void show(){
    //     cout<<apublic<<endl;
    // }

};
class C:public B{// It has  bprotected,bpublic,aprotected,apublic
public:
    int cpublic;
    C(){
        cout<<"C's Constructed called "<<endl;
    }
    void show(){
        cout<<aprotected;
    }
protected:
    int cprotected;
private:
    int cprivate;
};
int main(){
    // A a;
    // a.apublic=10;
    // //cout<<a.apublic<<endl;
    // B b;
    C c;
    B b;
    A a;
}