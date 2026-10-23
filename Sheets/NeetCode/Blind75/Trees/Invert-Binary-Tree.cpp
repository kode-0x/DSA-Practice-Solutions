// Invert the binary tree by swapping the left and right children of every node, then return the root

#include <bits/stdc++.h>
using namespace std;

TreeNode *invertTree(TreeNode *root)
{
    if (!root)
        return nullptr;

    swap(root->left, root->right);

    invertTree(root->left);
    invertTree(root->right);

    return root;
}

int main()
{
}