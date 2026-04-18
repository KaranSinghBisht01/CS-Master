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
void levelorder(TreeNode* root){
    int n=findlevel(root);
    for(int i=1;i<=n;i++){
        nthlvldisplay(root,1,i);
        cout<<endl;
    }
    cout<<endl;
}
TreeNode* constructtree(queue<TreeNode*> q){
    int arr[]={1,2,3,4,5,INT_MIN,6,INT_MIN,INT_MIN,7,8,9,INT_MIN};
    TreeNode* root=new TreeNode(arr[0]);
    q.push(root);
    int i=1,j=2;
    int n=sizeof(arr)/sizeof(arr[0]);
    while(i<n && j<n && q.size()>0){
        TreeNode* temp=q.front();
        q.pop();
        TreeNode* l= new TreeNode(arr[i]);
        if(arr[i]==INT_MIN) l= NULL;
        TreeNode* r= new TreeNode(arr[j]);
        if(arr[j]==INT_MIN) r= NULL;
        temp->left=l;
        temp->right=r;
        i+=2,j+=2;
        if(l!=NULL) q.push(l);
        if(r!=NULL) q.push(r);
    }
    // int lvl=findlvl(root);
    // for(int i=1;i<=lvl;i++){
    //     displaylvlorder(root,1,i);
    //     cout<<endl;
    // }
    return root;
    //levelorder(root);
}
void leftboundary(TreeNode* root){
    if(root==NULL) return ;
    if(root->left==NULL && root->right==NULL) return ;
    cout<<root->val<<" ";
    leftboundary(root->left);
    if(root->left==NULL)leftboundary(root->right);
}
void bottomboundary(TreeNode* root){
    if(root==NULL) return ;
    if(root->left==NULL && root->right==NULL) cout<<root->val<<" ";
    bottomboundary(root->left);
    bottomboundary(root->right);
}
void rightboundary(TreeNode* root){
    if(root==NULL) return ;
    if(root->left==NULL && root->right==NULL) return ;
    rightboundary(root->right);
    if(root->right==NULL)rightboundary(root->right);
    cout<<root->val<<" ";
}
int main(){ 
    int arr[]={1,2,3,4,5,INT_MIN,6,INT_MIN,INT_MIN,7,8,9,INT_MIN};
    // TreeNode* root=new TreeNode(arr[0]);
    queue<TreeNode*> q;
    TreeNode* root=constructtree(q);
    levelorder(root);
    leftboundary(root);
    bottomboundary(root);
    rightboundary(root->right);
    // TreeNode* temp;
}