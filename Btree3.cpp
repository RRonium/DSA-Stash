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
        left=right=nullptr;
    }
};
void preordertraversal(TreeNode* root)
{
    if(root==NULL)
        return;
    cout<<root->data<<" ";
    preordertraversal(root->left);
    preordertraversal(root->right);
}
void postordertraversal(TreeNode* root)
{
    if(root==NULL)
        return;
    postordertraversal(root->left);
    postordertraversal(root->right);
    cout<<root->data<<" ";
}
void inordertraversal(TreeNode* root)
{
    if(root==NULL)
        return;
    inordertraversal(root->left);
    cout<<root->data<<" ";
    inordertraversal(root->right);
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
    preordertraversal(root);
    cout<<endl;

    cout<<"Post-Order Traversal: "<<endl;
    postordertraversal(root);
    cout<<endl;

    cout<<"In-Order Traversal: "<<endl;
    inordertraversal(root);
    cout<<endl;
    return 0;
}