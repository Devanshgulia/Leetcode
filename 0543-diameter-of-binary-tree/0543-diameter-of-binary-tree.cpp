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
    // int height(TreeNode* root){
    //     if(root == NULL){
    //         return 0;
    //     }

    //     int leftH = height(root->left);
    //     int rightH = height(root->right);

    //     int height = max(leftH,rightH)+1;

    //     return height;
    // }

    pair<int,int> solve(TreeNode* root){

        if (root == NULL){
            return make_pair(0,0);
        }
        pair<int,int> leftI = solve(root->left);
        pair<int,int> rightI = solve(root->right);
        // int rootD = height(root->left) + height(root->right);

        int rootD = leftI.second + rightI.second;
        int dia = max(rootD,max(leftI.first,rightI.first));
        int height = max(leftI.second , rightI.second)+1;
    
        return make_pair(dia, height);
    }

    int diameterOfBinaryTree(TreeNode* root) {
        return solve(root).first;
    }
};