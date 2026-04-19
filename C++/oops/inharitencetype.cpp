#include<bits/stdc++.h>
using namespace std;
class parent{
public:
    parent(){
        cout<<"parent class called "<<endl;
    }
};
class parent2{
public:
    parent2(){
        cout<<"parent2 class called "<<endl;
    }
};

class child:public parent{
public:
    child(){
        cout<<"child class called "<<endl;
    }
};
class grandchild: public child{
public:
    grandchild(){
        cout<<"grand child called "<<endl;
    }
}; // multilevel innharitence 

class unknown1 : public parent2,public parent{
public: 
    unknown1(){
        cout<<"unknown child "<<endl;
    }
} ; // multiple inharitance4

class child2 : public parent{  
public: 
    child2(){
        cout<<"child2 class ";
    }
};
class child3 : public parent{
public: 
    child3(){
        cout<<"child3 class ";
    }
};
class child4 : public parent{
public: 
    child4(){
        cout<<"child3 class ";
    }
}; // child 2-4 hierarchical inharitance 

class sibling1 : public parent{
public:
    sibling1(){
        cout<<"sibling1 "<<endl;
    }
};

class sibling2 : public parent{
public:
    sibling2(){
        cout<<"sibling2 "<<endl;
    }
};

class childsib1 : public sibling1{
public: 
    childsib1(){
        cout<<"childsibling 1"<<endl;
    }
};

class childsib2 :public sibling2{
public:
    childsib2(){
        cout<<"childsib 2"<<endl;
    }
};

class grandsib : public childsib1,public childsib2{
public:
    grandsib(){
        cout<<"grandsib "<<endl;
    }
};
int main(){
    // parent p1;
    // child c1;
    // grandchild g1;
    //unknown1 u1;
    grandsib g2;

}