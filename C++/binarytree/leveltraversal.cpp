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
int findlevel(TreeNode* root){
    if(root==NULL) return 0;
    return 1+max(findlevel(root->left),findlevel(root->right));
}
void nthlvldisplay(TreeNode* root,int lvl,int n){
    if(root==NULL) return ;
    if(lvl==n) cout<<root->val<<" ";
    nthlvldisplay(root->left,lvl+1,n);
    // if(lvl==n) cout<<root->val<<" ";
    nthlvldisplay(root->right,lvl+1,n);
    //if(lvl==n) cout<<root->val<<" ";
}
void revnthlvldisplay(TreeNode* root,int lvl,int n){
    if(root==NULL) return ;
    if(lvl==n) cout<<root->val<<" ";
    revnthlvldisplay(root->right,lvl+1,n);
    revnthlvldisplay(root->left,lvl+1,n);
}
void levelorder(TreeNode* root){
    int n=findlevel(root);
    for(int i=1;i<=n;i++){
        nthlvldisplay(root,1,i);
        cout<<endl;
    }
    cout<<endl;
}
void revlevelorder(TreeNode* root){
    int n=findlevel(root);
    for(int i=1;i<=n;i++){
        revnthlvldisplay(root,1,i);
        cout<<endl;
    }
    cout<<endl;
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
    nthlvldisplay(a,1,3);
    cout<<endl;
    levelorder(a);
    revlevelorder(a);
}