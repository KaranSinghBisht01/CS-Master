// #include<bits/stdc++.h>
// using namespace std;
// class Node{
// public:
//     Node *next;
//     Node *prev;
//     int val;

//     Node(int val){
//         this->val=val;
//         //next=prev=NULL;
//         this->next=NULL;
//         this->prev=NULL;
//     }
// };
// class Deque{
// public:
//     Node *head;
//     Node *tail;
//     int size;

//     Deque(){
//         head=tail=NULL;
//         size=0;
//     }
//     void push_front(int val){
//         Node* nn=new Node(val);
//         if(size==0){
//             head=tail=nn;
//         }
//         else{
//             nn->next=head;
//             head->prev=nn;
//             head=nn;
//         }
//         size++;
//     }
//     void push_back(int val){
//         Node *nn=new Node(val);
//         if(size==0){
//             head=tail=nn;
//             //return ;
//         }
//         else{
//             tail->next=nn;
//             nn->prev=tail;
//             tail=nn;
//         }
//         size++;
//     }
//     void pop_front(){
//         if(size==0){
//             cout<<"queue is empty ";
//             return ;
//         }
//         head=head->next;
//         if(head==NULL) tail=NULL;
//         if(head!=NULL) head->prev=NULL;
//         size--;
//     }
//     void pop_back(){
//         if(size==0){
//             cout<<"queue is empty ";
//             return ;
//         }
//         else if(size==1){
//             pop_front();
//             return;
//         }
//         tail=tail->prev;
//         tail->next=NULL;
//         size--;
//     }
//     int front(){
//         if(size==0){
//             cout<<"queue is empty ";
//             return -1;
//         }
//         cout<<endl;
//         return head->val;
//     }
//     int back(){
//         if(size==0){
//             cout<<"queue is empty ";
//             return -1;
//         }
//         cout<<endl;
//         return tail->val;
//     }
//     void display(){
//         Node *temp;
//         temp=head;
//         while(temp!=NULL){
//             cout<<temp->val;
//             temp=temp->next;
//         }
//         cout<<endl;
//     }
// };
// int main(){
//     Deque dq;
//     dq.push_back(10);
//     dq.push_back(90);
//     dq.display();
// }

#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int val;
    Node* next;
    Node* prev;

    Node(int val){
        this->val=val;
        next=prev=NULL;
    }
};
class Deque{
    public:
    Node *head;
    Node *tail;
    int size;

    Deque(){
        this->head=NULL;
        this->tail=NULL;
        this->size=0;
    }
    void push_front(int val){
        Node *nn=new Node(val);
        if(size==0){
            head=tail=nn;
        }
        else{
            nn->next=head;
            head->prev=nn;
            head=nn;
        }
        size++;
        //cout<<endl;
    }
    void push_back(int val){
        Node *nn=new Node(val);
        if(size==0){
            head=tail=nn;
        }
        else{
            tail->next=nn;
            nn->prev=tail;
            tail=nn;
        }
        size++;
    }
    void pop_front(){
        if(size==0){
            cout<<" Queue is empty ";
            return ;
        }
        else{
            head=head->next;
            head->prev=NULL;
        }
        size--;
    }
    void pop_back(){
        if(size==0){
            cout<<" Queue is empty ";
            return ;
        }
        if(size==1){
            pop_front();
            return;
        }
        tail=tail->prev;
        tail->next=NULL;
        size--;
    }
    void display(){
        Node *temp;
        temp=head;
        while(temp!=NULL){
            cout<<temp->val<<" ";
            temp=temp->next;
        }
    }
    int front(){
        if(size==0){
            cout<<"an empty queue ";
            return -1;
        }
        return head->val;
    }
    int back(){
        if(size==0){
            cout<<"an empty queue ";
            return -1;
        }
        return tail->val;
    }
};
int main(){
    Deque dq;
    cout<<dq.front()<<endl;
    dq.push_front(10);
    dq.push_back(20);
    dq.push_front(0);
    dq.display();
}