#include<bits/stdc++.h>
using namespace std;
class Queue{
public:
    int arr[100];
    int f;
    int b;
    int size;
    Queue(){
        f=0;
        b=0;
        size=0;
    }
    void push(int val){
        if(size==sizeof(arr)/sizeof(arr[0])){
            cout<<"Overflow !"<<endl;
            return ;
        }
        arr[b]=val;
        b++;
        size++;
    }
    void pop(){
        if(size==0) {
            cout<<"underflow !"<<endl;
            return ;
        }
        f++;
        size--;
    }
    void display(){
        if(size==0){
            cout<<"Underflow !"<<endl;
            return;
        }
        for(int i=f;i<b;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
    int front(){
        if(size==0){
            cout<<"Queue is empty ";
            return -1;
        }
        return arr[f];
    }
    int back(){
        if(size==0){
            cout<<"Queue is empty ";
            return -1;
        }
        return arr[b-1];
    }
    bool empty(){
        if(size==0) return true;
        return false;
    }
};
int main(){
    Queue q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    q.display();// 50,40,30,20,10
    q.pop();
    q.pop();
    q.pop();
    q.display();// 50,40
    q.push(60);
    q.push(70);
    q.push(80);
    q.push(90);
    q.push(100);
    q.display();// 100,90,80,70,60,50,40
    cout<<q.front()<<endl; // 40
    cout<<q.back()<<endl; // 100
    cout<<q.size<<endl;// 7
    cout<<q.empty()<<endl; //0
} 