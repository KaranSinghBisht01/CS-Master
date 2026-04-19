#include<iostream>
using namespace std;
class book{
    private:
    int pages;
    int price;
    string name;

    public:

    void getprice(int x){
        price=x;
        //cout<<price<<endl;
    }

    void getname(string s){
        name=s;
    }

    bool countbook(int p){
       // cout<<p<<endl<<price;
        if(p!=price) return 0;
        else return 1;
    }

    bool isbookpresent(string book){
        if(book==name) return true;
        else false ;
    }

};
int main(){
    book x;
    string s;
    cout<<"enter book name ";
    getline(cin,s);
    int price;
    cout<<"enter price ";
    cin>>price;
    x.getprice(price);
    x.getname(s);
    cout<<x.countbook(100)<<endl;
    cout<<x.isbookpresent("atomic habit");
}