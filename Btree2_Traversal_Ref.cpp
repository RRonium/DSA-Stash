#include <iostream>
using namespace std;
class TreeNode
{
    public:
    int data;
    TreeNode* left;  
    TreeNode* right;
    TreeNode(int val)
    {
        data=val;
        left=right=NULL;
    }
};
void preorderTraversal(TreeNode* node)
{
    if(node==NULL)
        return;
    cout<<node->data<<" ";
    preorderTraversal(node->left);
    preorderTraversal(node->right);
}
void postorderTraversal(TreeNode* node)
{
    if(node==NULL)
        return;
    postorderTraversal(node->left);
    postorderTraversal(node->right);
    cout<<node->data<<" ";
}
void inorderTraversal(TreeNode* node)
{
    if(node==NULL)
        return;
    inorderTraversal(node->left);
    cout<<node->data<<" ";
    inorderTraversal(node->right);
}
int main()
{
    TreeNode* root =new TreeNode(8);
    root->left =new TreeNode(3);
    root->left->left =new TreeNode(1);
    root->left->right =new TreeNode(6);
    root->left->right->left =new TreeNode(4);
    root->left->right->right =new TreeNode(7);
    root->right =new TreeNode(10);
    root->right->right =new TreeNode(14);
    root->right->right->left =new TreeNode(13);

    cout<<"Pre-Order Traversal: "<<endl;
    preorderTraversal(root);
    cout<<endl;

    cout<<"Post-Order Traversal: "<<endl;
    postorderTraversal(root);
    cout<<endl;

    cout<<"In-Order Traversal: "<<endl;
    inorderTraversal(root);
    cout<<endl;
    return 0;
}