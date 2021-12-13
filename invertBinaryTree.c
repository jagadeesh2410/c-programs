
//  Definition for a binary tree node.
  struct TreeNode {
      int val;
      struct TreeNode *left;
      struct TreeNode *right;
  };
 


struct TreeNode* invertTree(struct TreeNode* root){
    if(!root){
        return NULL;
    }
    struct TreeNode* leftTree = invertTree(root->left);
    struct TreeNode* rightTree = invertTree(root->right);
    
root->left=rightTree;
root->right=leftTree; 
    return root;
    

}
