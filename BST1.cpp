#include <iostream>
#include <vector>   
using namespace std;
vector<char> path;
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
bool BSTSearch(TreeNode* root, int data)
{
    if(root==NULL) 
        return false;
    if(root->data==data) 
    {
        path.push_back('X');
        return true;
    }
    else if(data<root->data)
    {
        path.push_back('L');
        return BSTSearch(root->left,data);
    }
    else
    {
        path.push_back('R');
        return BSTSearch(root->right,data);
    }
}
TreeNode* insertNode(TreeNode *&root, int data)
{
    if(root==nullptr)
    {
        root =new TreeNode(data);
        return root;
    }
    if(data==root->data) return root; 
    else if(data<root->data) root->left=insertNode(root->left,data);
    else root->right=insertNode(root->right,data);
    return root;
}
TreeNode* deleteNode(TreeNode *&root, int data)
{
    if(root==nullptr) return nullptr;
    else if(data<root->data) root->left=deleteNode(root->left,data);
    else if(data>root->data) root->right=deleteNode(root->right,data);
    else 
    {
        if(root->left==nullptr && root->right==nullptr) 
        {
            delete root;
            root=nullptr;
        }
        else if(root->left==nullptr)
        {
            TreeNode* temp =root;
            root=root->right;
            delete temp;
        }
        else if(root->right==nullptr)
        {
            TreeNode* temp =root;
            root=root->left;
            delete temp;
        }
        else
        {
            TreeNode* temp = root->right;
            while (temp->left != nullptr) temp = temp->left; 
            root->data = temp->data;
            deleteNode(root->right, temp->data);
        }
    }
    return root;
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

    int target;
    cout<<"Enter the target value: "<<endl;
    cin>>target;
    if(BSTSearch(root,target))
    {
        cout<<"Found it"<<endl;
        cout<<"Path to target: "<<endl;
        for(int i=0;i<path.size();i++)
            cout<<path[i]<<" ";
        cout<<endl;
    }
    return 0;
}