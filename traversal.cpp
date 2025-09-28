// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
#include<bits/stdc++.h>
class Node{
    public:
    Node *lchild;
    int val;
    Node *rchild;
    Node(int val){
        this->val=val;
        lchild=rchild=NULL;
    }
};

void iterativePreOrder(Node*t){
    if(!t) return;
    stack<Node*> st;
    st.push(t);
    while(!st.empty()){
        Node *x=st.top();
        st.pop();
        cout<<x->val<<" ";
       if(x->rchild) st.push(x->rchild);
       if(x->lchild) st.push(x->lchild);
    }
}
void levelOrder(Node *t){
    if(!t)return;
    queue<Node*>q;
    q.push(t);
    while(!q.empty()){
        Node *x=q.front();
        q.pop();
        cout<<x->val<<" ";
        if(x->lchild)q.push(x->lchild);
        if(x->rchild)q.push(x->rchild);
    }
    
}

int main(){
    Node *root=new Node(1);
  
    root->lchild=new Node(2);
    root->rchild=new Node(3);
    root->lchild->lchild=new Node(4);
    root->lchild->rchild=new Node(5);
     root->rchild->lchild=new Node(6);
    root->rchild->rchild=new Node(7);
    cout<<"PreOrder Traversal: ";
    iterativePreOrder(root);
    cout<<endl;
    cout<<"LevelOrder Traversal: ";
    levelOrder(root);
    
    return 0;
}