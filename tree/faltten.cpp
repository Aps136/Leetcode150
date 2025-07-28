/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    void preorder(TreeNode *root, vector<TreeNode *> &arr)
    {
        if(root == nullptr)
        {
            return;
        }

        arr.push_back(root);
        preorder(root->left, arr);
        preorder(root->right, arr);
    }

    void flatten(TreeNode* root) {
        if(root == nullptr)
        {
            return;
        }
        vector<TreeNode *> arr;

        preorder(root, arr);
        TreeNode *p = root;

        for(int i=1; i<arr.size(); i++)
        {
            p->left = nullptr;
            p->right = arr[i];
            p = p->right;
        }
       


        
    }
};
