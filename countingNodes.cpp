//counting Nodes of a tree
#include<iostream>
using namespace std;
#include<bits/stdc++.h>
class TreeNode {
public:
    TreeNode *left;
    int val;
    TreeNode *right;
    TreeNode(int val) {
        this->val = val;
        left = right = NULL;
    }
};  
int countNodes(TreeNode* root) {
    if (!root) return 0;
    return 1 + countNodes(root->left) + countNodes(root->right);
}
//counting nodes having degree 1 or exactly one child
int countDegreeOneNodes(TreeNode* root) {
    if (!root) return 0;
    int x,y;
    x = countDegreeOneNodes(root->left);    
    y = countDegreeOneNodes(root->right);
    if(root->left!=NULL ^ root->right!=NULL)//XOR operator
        return x+y+1;
    else
        return x+y;
        
        return 0;
}
//counting nodes having degree 2 or exactly two children
int countDegreeTwoNodes(TreeNode* root) {
    if (!root) return 0;
    int x,y;
    x = countDegreeTwoNodes(root->left);    
    y = countDegreeTwoNodes(root->right);
    if(root->left!=NULL && root->right!=NULL)
        return x+y+1;
    else
        return x+y;
        
        return 0;
}
//counting leaf nodes or nodes having degree 0
int countLeafNodes(TreeNode* root) {    
    if (!root) return 0;
    int x,y;
    x = countLeafNodes(root->left);    
    y = countLeafNodes(root->right);
    if(root->left==NULL && root->right==NULL)
        return x+y+1;
    else
        return x+y;
        
        return 0;
}
       
