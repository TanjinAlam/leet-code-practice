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
    void maxTreeDept(TreeNode* root,int level,vector<int>& ans){
       if(!root) return;
       ans.push_back(++level);
       if(root->left!= NULL){
            maxTreeDept(root->left,level,ans);
        }
        if(root->right != NULL){
            maxTreeDept(root->right,level,ans);
        }
        
    }
    
    int maxDepth(TreeNode* root) {
        vector<int>v;
        if(!root) return 0;
        maxTreeDept(root,0,v);
        for(int i=0; i<v.size(); i++){
            cout << v[i] << endl;
        }
        sort(v.begin(), v.end(), greater<int>());
        return v[0];
    }
    
};