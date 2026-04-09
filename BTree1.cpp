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
        //why not left=right=nullptr; ?
    }
};
int main()
{
    //Manual insertion of children of the tree and leaflet
    TreeNode* root =new TreeNode(1); 
    root->left =new TreeNode(2);
    root->right =new TreeNode(3);
    root->left->right =new TreeNode(5);
    return 0;
}