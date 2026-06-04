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
int find(TreeNode* root , int &pathsum)
{   
    // if root  is null then return 0 because we are calculating the sum and if we get null then it will not contribute to the sum so we will return 0
    if(!root)return 0;
     
    //find the left and right subtree and if the sum is negative then we will take 0 because we are looking for maximum path sum and if the sum is negative then it will not contribute to the maximum path sum so we will take 0
    int leftmax = max(0, find(root->left , pathsum));
    int rightmax = max(0, find(root->right , pathsum));
    
    // calculate the sum of the current node and the left and right subtree and update the pathsum if the sum is greater than the pathsum
    int sum = root->val + leftmax + rightmax;
    // update the pathsum if the sum is greater than the pathsum
    pathsum = max(sum , pathsum);
  
    // return the maximum path sum of the current node and the left and right subtree because we are looking for the maximum path sum and if we return the sum of the current node and the left and right subtree then it will not contribute to the maximum path sum because we are looking for the maximum path sum and if we return the sum of the current node and the left and right subtree then it will not contribute to the maximum path sum because we are looking for the maximum path sum and if we return the sum of the current node and the left and right subtree then it will not contribute to the maximum path sum because we are looking for the maximum path sum and if we return the sum of the current node and the left and right subtree then it will not contribute to the maximum path sum because we are looking for the maximum path sum and if we return the sum of the current node and the left and right subtree then it will not contribute to the maximum path sum because we are looking for the maximum path sum and if we return the sum of the current node and the left and right subtree then it will not contribute to the maximum path sum because we are looking for the maximum path sum and if we return the sum of the current node and the left and right subtree then it will not contribute to the maximum path sum because we are looking for the maximum path sum and if we return the sum of the current node and the left and right subtree then it will not contribute to the maximum path sum because we are looking for the maximum path sum and if we return the sum of the current node and the left and right subtree then it will not contribute to the maximum path sum because we are looking for the maximum path sum
    return root->val + max(leftmax , rightmax);
}
    int maxPathSum(TreeNode* root) {
     //assume the path sum is minimum because we are looking for the maximum path sum and if we assume the path sum is minimum then we can update it when we find a path sum that is greater than the minimum path sum
    int ans = INT_MIN;
    int val = find(root, ans);
    // if negative value is returned then we will take 0 because we are looking for the maximum path sum and if we get negative value then it will not contribute to the maximum path sum so we will take 0
    return max(ans, val);
    }
};