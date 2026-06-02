./**
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
    // using recursion 
    void helper(TreeNode* root , vector<int>& ans){
    if(root== NULL) return ;
    ans.push_back(root->val);
    helper(root->left , ans);
    helper(root->right , ans);
    }
    vector<int> preorderTraversal(TreeNode* root) {
    vector<int> ans;
    helper(root , ans);
    return ans;
    }
   
   // using stack
    vector<int> preorderTraversal(TreeNode* root) {
    stack<TreeNode*> ans;
    vector<int> finalans;
    if(root == NULL) return finalans;
    ans.push(root);
    while(!ans.empty()){
    TreeNode* temp = ans.top();
    ans.pop();
    finalans.push_back(temp->val);
    if(temp->right){
        ans.push(temp->right);
    }
    if(temp->left){
        ans.push(temp->left);
    }
    }
    return finalans;
    }
};