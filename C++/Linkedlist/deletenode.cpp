#include<iostream>
using namespace std;
class Node{
public:
    int val;
    Node *next;

    Node(int val){
        this->val=val;
        this->next=NULL;
    }
};
class LinkedList{
public:
    Node *head;
    int size;

    LinkedList(){
        this->head=NULL;
        size=0;
    }
    Node* DeleteNode(Node *head,Node *target){
        Node *temp=head;
        if(head==target){
            head=head->next;
            return head;
        }
        while(temp->next!=target){
            temp=temp->next;
        }
        temp->next=temp->next->next;
        return head;
    }
    void Display(Node *head){
        Node*temp=head;
        while(temp!=NULL){
            cout<<temp->val<<" ";
            temp=temp->next;
        }
        cout<<endl;
    }

};
int main(){
    LinkedList ll;
    Node* a=new Node(10);
    Node* b=new Node(20);
    Node* c=new Node(30);
    Node* d=new Node(40);
    Node* e=new Node(50);
   
    a->next=b;
    b->next=c;
    c->next=d;
    d->next=e;
    Node* head=a;
    ll.Display(head);
    head=ll.DeleteNode(a,a);
    ll.Display(head);
}