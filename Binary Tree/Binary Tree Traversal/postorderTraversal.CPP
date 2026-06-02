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

      // USING RECUSSION 
        void helper(TreeNode* root , vector<int>& ans){
        if(root== NULL) return ;
        helper(root->left , ans);
        helper(root->right , ans);
        ans.push_back(root->val);
        }
        vector<int> postorderTraversal(TreeNode* root) {
        vector<int> ans;
        helper(root , ans);
        return ans;
        }
    // USING STACK
    vector<int> postorderTraversal(TreeNode* root) {
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
    reverse(finalans.begin() , finalans.end());
    return finalans;
    }
};