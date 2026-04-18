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
int sumTree(TreeNode* root){
    if(root==NULL) return 0;
    // int leftsum=sumTree(root->left);
    // int rightsum=sumTree(root->right);
    return root->val+sumTree(root->left)+sumTree(root->right);
}
int size(TreeNode* root){
    if(root==NULL) return 0;
    return 1+size(root->left)+size(root->right);
}
int maxvalue(TreeNode* root){
    if(root==NULL) return INT_MIN;
    return max(root->val,max(maxvalue(root->left),maxvalue(root->right)));
}
int minvalue(TreeNode* root){
    if(root==NULL) return INT_MAX;
    return min(root->val,max(minvalue(root->left),minvalue(root->right)));
}
int findlevel(TreeNode* root){
    if(root==NULL) return 0;
    return 1+max(findlevel(root->left),findlevel(root->right));
}
int Findheight(TreeNode* root){
    if(root==NULL) return 0;
    return 1+max(Findheight(root->left),Findheight(root->right));
}
int product(TreeNode* root){
    if(root==NULL) return 1;
    return root->val*(product(root->left)*product(root->right));
}
int minintree(TreeNode* root){
    if(root==NULL) return INT_MAX;
    return min(root->val,min(minintree(root->left),minintree(root->right)));
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
    displayTree(a);
    cout<<endl;
    cout<<sumTree(a)<<endl;
    cout<<size(a)<<endl;
    cout<<maxvalue(a)<<endl;
    cout<<minvalue(a)<<endl;
    cout<<findlevel(a)<<endl;
    cout<<Findheight(a)-1<<endl;
    cout<<product(a)<<endl;
    cout<<minintree(a)<<endl;
}