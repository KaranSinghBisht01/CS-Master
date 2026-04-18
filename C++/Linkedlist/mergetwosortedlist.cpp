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
    Node *tail;
    int size;
    LinkedList(){
        head=tail=NULL;
        size=0;
    }
    void Inserthead(int val){
        Node *temp=new Node(val);
        if(size==0){
            head=tail=temp;
            size++;
        }
        else{
            temp->next=head;
            head=temp;
            size++;
        }
    }
    void Inserttail(int val){
        Node *temp=new Node(val);
        if(size==0) Inserthead(val);
        else{
            tail->next=temp;
            tail=temp;
        }
        size++;
    }
    void Insertany(int val,int idx){
        if(idx<0 || idx>size) cout<<"invalid index ";
        else if(size==0 || idx==0) Inserthead(val);
        else if(idx==size) Inserttail(val);
        else{
            Node *temp=new Node(val);
            Node *t=head;
            for(int i=1;i<=idx-1;i++){
                t=t->next;
            }
            //temp->next=t->next->next;
            temp->next=t->next;
            t->next=temp;
            size++;
        }
    }
    void Display(){
        Node *temp;
        temp=head;
        while(temp!=NULL){
            cout<<temp->val<<" ";
            temp=temp->next;
        }
        cout<<endl;
    }
};
void merge(Node *head1,Node *head2){
    //cout<<head1->val<<" ";
    LinkedList temp;
    int size=0;
    while(head1!=NULL && head2!=NULL){
        if(head1->val<=head2->val){
            //temp=head1;
            temp.Insertany(head1->val,size);
            head1=head1->next;
        }
        else{
            //temp=head2;
            temp.Insertany(head2->val,size);
            head2=head2->next;
        }
        size++;
    }
    if(head1==NULL && head2!=NULL){
        //temp=head2;
        temp.Insertany(head2->val,size);
        head2=head2->next;
        size++;
    }
    else if(head2==NULL && head1!=NULL){
        //temp=head1;
        temp.Insertany(head1->val,size);
        head1=head1->next;
        size++;
    }
    temp.Display();
}
int main(){
    LinkedList l1;
    l1.Inserthead(20);
    l1.Inserthead(10);
    l1.Inserttail(30);
    l1.Inserttail(40);
    l1.Insertany(50,4);
    //l1.Display();
    LinkedList l2;
    l2.Inserthead(20);
    l2.Inserthead(10);
    l2.Inserttail(4560);
    l2.Inserttail(40);
    l2.Insertany(50,4);
    //l2.Display();
    // LinkedList l3;
    // l3=merge(l1,l3);
    // Node *head=LinkedList *head;
    // cout<<head;
    //Node *head=
    merge(l1.head,l2.head);
}