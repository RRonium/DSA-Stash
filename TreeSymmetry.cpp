#include <iostream>
using namespace std;
class TreeNode
{
    public:
    int data;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int data1)
    {
        data=data1;
        left=right=NULL;
    }
};
bool isSymmetric(TreeNode* leftSub, TreeNode* rightSub)
{
    if(leftSub==nullptr && rightSub==nullptr)
        return true;
    if(leftSub==nullptr || rightSub==nullptr || leftSub->data!=rightSub->data)
        return false;
    return isSymmetric(leftSub->left,rightSub->right) && isSymmetric(leftSub->right,rightSub->left);
}
int main()
{
    TreeNode* root =new TreeNode(10);
    root->left =new TreeNode(5);
    root->left->left =new TreeNode(2);
    root->right =new TreeNode(5);
    root->right->right =new TreeNode(2);
    if(isSymmetric(root->left,root->right))
        cout<<"The tree is Symmetric"<<endl;
    else    
        cout<<"The tree isn't Symmetric"<<endl;
}