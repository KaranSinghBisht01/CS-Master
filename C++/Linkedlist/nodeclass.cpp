#include<iostream>
using namespace std;
class Node{ // now this is the complete node 
public:
    int val; // this is the variable to store value 
    Node *next;       /*this the node pointer variable to store the 
                        address of next variable */
        Node(int val){
        this->val=val;
        this->next=NULL;
    }
};
int main(){
    Node a(10); /* these are the node of linkedlist 
                    a.next stores the address of next variable
                    similarly b.next stores the next variable's address 
                    each node stores the address of next node but
                    node e.next stores NULL 
                    These are the pointer variables we can access these by 
                    this operator (->) or by the dereferencing operator (*) */
    Node b(20);
    Node c(30);
    Node d(40);
    Node e(50);

    // a.val=10;
    // b.val=20;
    // c.val=30;
    // d.val=40;
    a.next=&b;
    b.next=&c;
    c.next=&d;
    d.next=&e;
    // cout<<a.next->val<<endl;
    // cout<<(*(a.next)).val<<endl;

    // cout<<d.next->val<<endl;
    // cout<<(*(d.next)).val<<endl;
    
    cout<<a.val<<endl;
    cout<<(a.next)<<endl;
    cout<<(*(a.next)).val<<endl;
    cout<<(a.next)->next<<endl;
    cout<<(a.next)->next->val<<endl;
    cout<<(a.next)->next->next<<endl;
    cout<<(a.next)->next->next->val<<endl;
    cout<<(a.next)->next->next->next<<endl;
    cout<<(a.next)->next->next->next->val<<endl;
    cout<<(a.next)->next->next->next->next<<endl;// NULL


}