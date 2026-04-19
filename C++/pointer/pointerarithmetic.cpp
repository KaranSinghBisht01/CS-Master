#include<iostream>
using namespace std;
int main(){
    int a=10;
    int *ptr=&a;
    cout<<ptr<<endl<<*ptr;
    (*ptr)++;
    ptr++;
    cout<<ptr<<endl<<*ptr;
}