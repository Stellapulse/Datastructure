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

TreeNode* create() {
    int x;
    cin >> x;
    if (x == -1) return NULL; // no tree

    TreeNode *root = new TreeNode(x);
    queue<TreeNode*> q;
    q.push(root);

    while (!q.empty()) {
        TreeNode *p = q.front();
        q.pop();

        // Left child
        cin >> x;
        if (x != -1) {
            p->left = new TreeNode(x);
            q.push(p->left);
        }
        // Right child
        cin >> x;
        if (x != -1) {
            p->right = new TreeNode(x);
            q.push(p->right);
        }
    }
    return root;
}
