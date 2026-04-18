// #include<iostream>
// using namespace std;
// class Node{
//     public:
//     int val;
//     Node *next;

//     Node(int val){
//         this->val=val;
//         this->next=NULL;
//     }
// };
// class LinkedList{
//     public:
//     Node *head;
//     Node *tail;
//     int size;
//     LinkedList(){
//         head=tail=NULL;
//         size=0;
//     }
//     void InsertAtTail(int val){
//         Node *temp= new Node(val);
//         if(size==0) head=tail=temp;
//         else{
//             tail->next=temp;
//             tail=temp;
//         }
//         size++;
//     }
//     void Display(){
//         Node *temp=head;
//         while(temp!=NULL){
//             cout<<temp->val<<" ";
//             temp=temp->next;
//         }
//         cout<<endl;
//         return ;
//     } 
// };
// int main(){
//     LinkedList* ll=new LinkedList();
//     ll->InsertAtTail(10);
//     ll->Display();
//     ll->InsertAtTail(20);
//     ll->Display();
//     ll->InsertAtTail(30);
//     ll->Display();
//     ll->InsertAtTail(40);
//     ll->Display();
// }
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
    void InssertAtTail(int val){
        Node *temp=new Node(val);
        if(size==0){
           // head->next=temp;
            head=tail=temp;
            size++;
        }
        else {
            tail->next=temp;
            tail=temp;
            size++;
        }
    }
    void Display(){
        Node *temp=head;
        while(temp!=NULL){
            cout<<temp->val<<" ";
            temp=temp->next;
        }
        cout<<endl;
        return;
    }
};
int main(){
    //Node a(20);
    LinkedList* ll=new LinkedList();
    ll->InssertAtTail(10);
    ll->Display();
    ll->InssertAtTail(20);
    ll->Display();
}