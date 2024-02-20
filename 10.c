int st[10000];
void inorder(struct TreeNode *root, int *top);
bool isValidBST(struct TreeNode* root)
{
    if(root==NULL)
        return true;
    
    int top=-1;
    inorder(root,&top);
    
    for(int i=1;i<=top;i++)
    {
        if(st[i]<=st[i-1])
            return false;
    }
    return true;
}
void inorder(struct TreeNode *root,int *top)
{  
    if(root==NULL)
        return;
    inorder(root->left,top);
    st[++(*top)]=root->val;
    inorder(root->right,top);
}
  