/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 int c;
 TreeNode *check(TreeNode*A,int B,int C)
 {
   if(A==NULL)
    return NULL;
      TreeNode *l=check(A->left,B,C);
    TreeNode *r=check(A->right,B,C);
    if(A->val==B||A->val==C)
    {
        c++;
        return A;
    }

    if(l!=NULL && r!=NULL)
    {
        return A ;
    }
    if(l!=NULL)
        return l;
    return r;
}
 
int Solution::lca(TreeNode* A, int B, int C) {
 
 c = 0;

TreeNode *node = check(A, B, C);

if(c==2){

return node->val;

}

else if(B==C && c==1){

return node->val;
}

return -1;

}

