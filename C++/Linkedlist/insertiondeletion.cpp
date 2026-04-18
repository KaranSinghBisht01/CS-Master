// #include<iostream>
// using namespace std;
// class Node{
// public:
//     int val;
//     Node* next;

//     Node(int val){
//         this->val=val;
//         this->next=NULL;
//     }
// };
// class LinkedList{
// public:
//     Node *head;
//     Node *tail;
//     int size;

//     LinkedList(){
//         head=tail=NULL;
//         size=0;
//     }
//     void InsertAtHead(int val){
//         Node *temp=new Node(val);
//         if(size==0){
//             head=tail=temp;
//         }
//         else{
//             temp->next=head;
//             head=temp;
//         }
//         size++;
//     }
//     void InsertAtTail(int val){
//     Node *temp=new Node(val);
//         if(size==0){
//         //  head->next=temp;
//             head=tail=temp;
//             size++;
//         }
//         else {
//             tail->next=temp;
//             tail=temp;
//             size++;
//         }
//     }
//     void InsertAtAny(int val,int idx){
//         if(idx<0 || idx>size) cout<<"invalid index ";
//         else if(idx==0) InsertAtHead(val);
//         else if(idx==size) InsertAtTail(val);
//         else {
//             Node *temp=head;
//             Node *t=new Node(val);
//             for(int i=1;i<=idx-1;i++){
//                 temp=temp->next;
//             }
//             t->next=temp->next;
//             temp->next=t;
//             size++;
//         }
//     }
//     void DeleteAtHead(){
//         if(size==0){
//             cout<<"List is empty ";
//             return;
//         }
//         head=head->next;
//         size--;
//     }
//     void DeleteAtTail(){
//         if(size==0){
//             cout<<"List is empty ";
//             return;
//         }
//         Node *temp=head;
//         while(temp->next!=tail){
//             temp=temp->next;
//         }
//         temp->next=NULL;
//         tail=temp;
//         size--;
//     }
//     void DeleteAtAny(int idx){
//         if(idx<0 || idx==size) cout<<"invalid index ";
//         else if(idx==size-1) DeleteAtTail();
//         else if(idx==0) DeleteAtHead();
//         else{
//             Node *temp;
//             temp=head;
//             for(int i=1;i<=idx-1;i++){
//                 temp=temp->next;
//             }
//             temp->next=temp->next->next;
//             size--;
//         }
//     }
//     void Display(){
//         Node *temp=head;
//         while(temp!=NULL){
//             cout<<temp->val<<" ";
//             temp=temp->next;
//         }
//         cout<<endl;
//     }
// };
// int main(){
//     LinkedList* ll=new LinkedList();
//     ll->InsertAtHead(10);//0
//     ll->Display();
//     ll->InsertAtHead(20);//1
//     ll->Display();
//     ll->InsertAtHead(30);//2
//     ll->Display();
//     ll->InsertAtTail(40);//3
//     ll->Display();
//     ll->InsertAtTail(50);//4
//     ll->Display();
//     ll->InsertAtTail(60);//5
//     ll->Display();
//     ll->InsertAtAny(80,3);
//     ll->Display();
//     ll->DeleteAtHead();
//     ll->Display();
//     ll->DeleteAtTail();
//     ll->Display();
//     ll->DeleteAtAny(2);
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

    void Inserthead(int val){
        //Node* temp = new Node(val);
        Node* temp=new Node(val); // dynamically allocation
        //Node *t;
        if(size==0){
            head=tail=temp;
            size++;
           // return ;
        }
        else{
            temp->next=head;
            head=temp;
            size++;
        }
    }
    void Inserttail(int val){
        Node *temp=new Node(val);
        if(size==0){
            head->next=temp;
            head=tail=temp;
        }
        else{
            tail->next=temp; 
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
            size++;
        }
    }
    void Delethead(){
        if(size==0){
            cout<<"List is empty ";
            return;
        }
        head=head->next;
        size--;
    }
    void Deletetail(){
         if(size==0){
            cout<<"List is empty ";
            return;
        }
        Node *temp=head;
        while(temp->next!=NULL){
            temp=temp->next;
        }
        tail=temp;
        tail->next=NULL;
        size--;
        //free(temp);
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
    LinkedList ll;
    ll.Inserthead(10);
    ll.Display();
    ll.Inserthead(20);
    ll.Display();
    ll.Inserttail(30);
    ll.Display();
    ll.Inserttail(40);
    ll.Display();
    ll.Insertany(50,2);
    ll.Display();
    ll.Deleteany(3);
    ll.Display();
    cout<<ll.GetValue(1);
}