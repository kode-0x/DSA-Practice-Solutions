// Return the maximum depth of the binary tree, defined as the number of nodes along the longest path from the root to a leaf

#include <bits/stdc++.h>
using namespace std;

int maxDepth(TreeNode *root)
{
    if (!root)
        return 0;

    int left = maxDepth(root->left);
    int right = maxDepth(root->right);

    return 1 + max(left, right);
}

int main()
{
}