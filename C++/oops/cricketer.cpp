#include<iostream>
using namespace std;
class cricketer{
private:
    int age;
    string name;
    int noOfMatches;
    int avgrun;
public:
    void setAge(int age){
        this->age=age;
    }
    void setName(string name){
        this->name=name;
    }
    void setnom(int noOfMatches){
        this->noOfMatches=noOfMatches;
    }
    void setAvgrun(int avgrun){
        this->avgrun=avgrun;
    }
    int getAge(){
        return age;
    }
    int getnoOfmatches(){
        return noOfMatches;
    }
    int getavgrun(){
        return avgrun;
    }
    string getname(){
        return name;
    }
};
int main(){
    cricketer player[20];
    for(int i=0;i<20;i++){
        string name;
        cout<<"enter name of "<<i+1<<"th player ";
        getline(cin,name);
        player[i].setName(name);
        int age;
        cout<<"enter age of "<<i+1<<"th player ";
        cin>>age;
        player[i].setAge(age);
        cout<<"enter total matches of "<<i+1<<"th player ";
        int tm;
        cin>>tm;
        player[i].setnom(tm);
        cout<<"enter avgrun of "<<i+1<<"th player ";
        int avgrn;
        cin>>avgrn;
        player[i].setAvgrun(avgrn);
    }

    cout<<player[0].getAge();

}