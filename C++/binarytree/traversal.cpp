#include<bits/stdc++.h>
using namespace std;
class TreeNode{
public:
    int val;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int val){
        this->val=val;
        this->right=NULL;
        this->left=NULL;
    }
};
void displaypreorder(TreeNode* a){
    if(a==NULL) return;
    cout<<a->val<<" ";
    displaypreorder(a->left);
    displaypreorder(a->right);
    //cout<<a->val<<" ";
}
void displayinorder(TreeNode* a){
    if(a==NULL) return;
    displayinorder(a->left);
    cout<<a->val<<" ";
    displayinorder(a->right);
    //cout<<a->val<<" ";
}
void displaypostorder(TreeNode* a){
    if(a==NULL) return;
    displaypostorder(a->left);
    displaypostorder(a->right);
    cout<<a->val<<" ";
}
int main(){ 
    TreeNode* a=new TreeNode(1);
    TreeNode* b=new TreeNode(2);
    TreeNode* c=new TreeNode(3);
    TreeNode* d=new TreeNode(4);
    TreeNode* e=new TreeNode(5);
    TreeNode* f=new TreeNode(6);
    TreeNode* g=new TreeNode(7);

    a->left=b;
    a->right=c;
    b->left=d;
    b->right=e;
    c->left=f;
    c->right=g;
    displaypreorder(a);cout<<endl;
    displayinorder(a);cout<<endl;
    displaypostorder(a);cout<<endl;
}