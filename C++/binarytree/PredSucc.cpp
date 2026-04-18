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
void displayTree(TreeNode* a){
    if(a==NULL) return;
    cout<<a->val<<" ";
    displayTree(a->left);
    displayTree(a->right);
    //cout<<a->val<<" ";
}
TreeNode* predeccessor(TreeNode* target){
    if(target->left==NULL) return NULL;
    TreeNode* pred=target->left;
    while(pred->right!=NULL){
        pred=pred->right;
    }
    cout<<"predeccessor of "<<target->val<<" :";
    return pred;
}
TreeNode* successor(TreeNode* target){
    if(target->right==NULL) return NULL;
    TreeNode* succ=target->right;
    while(succ->left!=NULL){
        succ=succ->left;
    }
    cout<<"successor of "<<target->val<<" :";
    return succ;
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
    TreeNode* pred=predeccessor(a);
    cout<<pred->val<<endl;
    TreeNode* succ=successor(a);
    cout<<succ->val<<endl;
    displayTree(a);
}