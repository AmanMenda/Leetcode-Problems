
#include <stdlib.h>

// Definition for a binary tree node.
struct TreeNode {
    int val;
    struct TreeNode *left;
    struct TreeNode *right;
};

// First method
struct TreeNode* invertTree(struct TreeNode* root)
{
    if (root == NULL)
        return NULL;
    struct TreeNode *tmp = root->left;
    root->left = root->right;
    root->right = tmp;
    
    invertTree(root->left);
    invertTree(root->right);
    return root;
}

// Second method
struct TreeNode* invertTree(struct TreeNode* root)
{
    if (root == NULL)
        return NULL;
    struct TreeNode *tmp = root->left;
    root->left = invertTree(root->left);
    root->right = invertTree(tmp);
    return root;
}