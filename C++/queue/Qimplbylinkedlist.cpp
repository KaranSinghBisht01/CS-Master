#include<bits/stdc++.h>
using namespace std;
class Node{
public:
    int val;
    Node *next;

    Node(int val){
        this->val=val;
        next=NULL;
    }
};
class Queue{
public:
    Node *head;
    Node* tail;
    int size=0;

    Queue(){
        head=NULL;
        tail=NULL;
        size=0;
    }
    void push(int val){
        Node *nn=new Node(val);
        if(size==0){
            size++;
            head=tail=nn;
            return ;
        }
        tail->next=nn;
        tail=nn;
        size++;
    }
    void pop(){
        if(size==0){
            cout<<"An empty queue !";
            return ;
        }
        head=head->next;
        size--;
    }
    void display(){
        Node *temp=head;
        while(temp!=NULL){
            cout<<temp->val<<" ";
            temp=temp->next;
        }
    }
    int front(){
        if(size==0){
            cout<<"An empty queue !";
            return -1;
        }
        return head->val;
    }
    int back(){
        if(size==0){
            cout<<"An empty queue !";
            return -1;
        }
        return tail->val;
    }
};
int main(){
    Queue q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    q.push(60);
    q.push(70);
    q.push(80);
    q.display();
    q.pop();
    q.pop();
    q.pop();
    q.display();
    cout<<q.front();
    cout<<q.back();
}