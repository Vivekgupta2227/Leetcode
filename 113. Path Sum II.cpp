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
    vector<vector<int>>ans;
    void path(TreeNode* root, int sum,vector<int>&a){
        if(root==nullptr){
            return;
        }
        int x=root->val;
        if(x==sum&&root->left==nullptr&&root->right==nullptr){
            a.push_back(x);
            ans.push_back(a);
            a.pop_back();
            return;
        }
        a.push_back(x);
        sum-=x;
        if(root->left!=nullptr){
            path(root->left,sum,a);
        }
        if(root->right!=nullptr){
            path(root->right,sum,a);
        }
        a.pop_back();
    }
    vector<vector<int>> pathSum(TreeNode* root, int sum) {
        vector<int>a;
        path(root,sum,a);
        return ans;
    }
};
