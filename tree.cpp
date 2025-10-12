#include<iostream>
using namespace std;
#include<bits/stdc++.h>

class TreeNode{
    public:
    TreeNode *left;
    int val;
    TreeNode* right;
    TreeNode(int val){
        this->val=val;
        left=right=NULL;
    }
};
void create(){
    TreeNode *p,*t;
    int x;
    cin>>x;
    queue<TreeNode*>q;
    TreeNode *root;
    if(x==-1){
        root=NULL;
        return;
    }
    if(!root){
    t= new TreeNode(x);
    root=t;
    root->left=root->right=NULL;
    q.push(t);
    }
    while(!q.empty()){
        p=q.front();
        q.pop();
        if(x!=-1){
            t=new TreeNode(x);
            p->left=t;
            q.push(t);
            t->left=t->right=NULL;

        }
        if(x!=-1){
            t=new TreeNode(x);
            p->right=t;
            q.push(t);
            t->left=t->right=NULL;

        }
    }



}