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
// int findlvl(TreeNode* root){
//     if(root==NULL) return 0;
//     return 1+max(findlvl(root->left),findlvl(root->right));
// }
// void displaylvlorder(TreeNode* root,int lvl,int currlvl){
//     if(root==NULL) return;
//     if(currlvl==lvl) cout<<root->val<<" ";
//     displaylvlorder(root->left,lvl+1,currlvl);
//     displaylvlorder(root->right,lvl+1,currlvl);
// }
void lvlorderqueue(TreeNode* root){
    queue<TreeNode*> q;
    q.push(root);
    while(q.size()>0){
        TreeNode* temp=q.front();
        q.pop();
        if(temp->left!=NULL) q.push(temp->left);
        if(temp->right!=NULL) q.push(temp->right);
        cout<<temp->val<<" ";
    }
}
void topview(TreeNode* root){
    unordered_map<int,int> mapp;
    queue<pair<TreeNode*,int>> q;
    pair<TreeNode*,int> p;
    p.first=root;
    p.second=0;
    q.push(p);
    while(q.size()>0){
        TreeNode* temp=q.front().first;
        int level=q.front().second;
        q.pop();
        if(mapp.find(level)==mapp.end()) mapp[level]=temp->val;
        if(temp->left!=NULL){
            pair<TreeNode*,int> p;
            p.first=temp->left;
            p.second=level-1;
            q.push(p);
        }
        if(temp->right!=NULL){
            pair<TreeNode*,int> p;
            p.first=temp->right;
            p.second=level+1;
            q.push(p);
        }
        int minlvl=INT_MAX;
        int maxlvl=INT_MIN;
        for(auto map:mapp){
            int lvl=map.first;
            minlvl=min(minlvl,lvl);
            maxlvl=max(maxlvl,lvl);
        }
        for(int i=minlvl;i<=maxlvl;i++){
            cout<<mapp[i]<<" ";
        }
    }
}
void constructtree(queue<TreeNode*> q){
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
    //lvlorderqueue(root);
    topview(root);
}
int main(){ 
    int arr[]={1,2,3,4,5,INT_MIN,6,INT_MIN,INT_MIN,7,8};
    // TreeNode* root=new TreeNode(arr[0]);
    queue<TreeNode*> q;
    constructtree(q);
}