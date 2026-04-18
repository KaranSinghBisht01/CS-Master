#include<iostream>
using namespace std;
class Node {
public:
    int val;
    Node* next;
    Node* prev;

    Node(int val){
        this->val=val;
        this->next=NULL;
        this->prev=NULL;
    }
};
class DoublyLinkedList{
public:
    Node *head;
    Node *tail;
    int size;

    DoublyLinkedList(){
        head=tail=NULL;
        size=0;
    }

    void Inserthead(int val){
        //Node* temp = new Node(val);
        Node* temp=new Node(val);
        //Node *t;
        if(size==0){
            head=tail=temp;
            size++;
           // return ;
        }
        else{
            temp->next=head;
            head->prev=temp;
            head=temp;
            size++;
        }
    }
    void Inserttail(int val){
        Node *temp=new Node(val);
        if(size==0){
            //tail->next=temp;
            head=tail=temp;
        }
        else{
            tail->next=temp; 
            temp->prev=tail;
            tail=temp;
        }
        size++;
    }
    void Insertany(int val,int idx){
        if(idx==0) Inserthead(val);
        else if(idx<0 || idx>size) cout<<"invalid Index";
        else if(idx==size) Inserttail(val);
        else{
            Node *temp;
            Node *t=new Node(val);
            temp=head;
            for(int i=1;i<=idx-1;i++){
                temp=temp->next;
            }
            t->next=temp->next;
            temp->next=t;
            t->prev=temp;
            t->next->prev=t;
            size++;
        }
    }
    void Deletehead(){
        if(size==0){
            cout<<"List is empty ";
            return;
        }
        head=head->next;
        if(head!=NULL) head->prev=NULL;
        if(head==NULL) tail=NULL;
        size--;
    }
    void Deletetail(){
         if(size==0){
            cout<<"List is empty ";
            return;
        }
        if(size==1){
            Deletehead();
            return;
        }
        tail=tail->prev;
        tail->next=NULL;
        size--;
    }
    void Deleteany(int idx){
        if(size==0){
            cout<<" List is empty ";
            return;
        }
        else if(idx<0 || idx>size){
            cout<<" Invalid index ";
            return ;
        }
        else{
            Node* temp=head;
            for(int i=1;i<idx;i++){
                temp=temp->next;
            }
            temp->next=temp->next->next;
            temp->next->prev=temp;
            size--;
        }
    }
    int GetValue(int idx){
        if(idx==0) return head->val;
        if(idx==size-1) return tail->val;
        if(idx<0 || idx>size){
            cout<<"invalid index ";
            return 0;
        }
        Node *temp;
        temp=head;
        for(int i=1;i<=idx-1;i++){
            temp=temp->next;
        }
        return temp->next->val;
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
int main(){
    DoublyLinkedList ll;
    ll.Inserthead(10);
    ll.Inserttail(20);
    ll.Inserttail(30);
    ll.Display();
    ll.Inserttail(40);
    ll.Inserttail(50);
    ll.Display();
    ll.Insertany(60,2);
    ll.Display();
    ll.Deletehead();
    ll.Display();
    ll.Deletetail();
    ll.Display();
    ll.Deleteany(2);
    ll.Display();
    ll.Inserttail(90);
    ll.Inserttail(100);
    ll.Display();
    cout<<ll.GetValue(2);
}