class Solution
{
    public:
    int maxDepth(TreeNode*root) {
        if(root== NULL)
        {
            return 0;
        }
    int Lheight= maxDepth(root-> left);
    int Rheight= maxDepth(root-> right);

    int h= max(Lheight, Rheight) +1;
    return h;
    }
};