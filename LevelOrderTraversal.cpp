#include <iostream>
#include <vector>
#include <queue>
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
vector<vector<int>> levelorder(TreeNode* root)
{
    vector<vector<int>> res;
    if(root==NULL)
        return res;
    queue<TreeNode*> q;
    q.push(root);
    while(!q.empty())
    {
        int size=q.size();
        vector<int> level;
        for(int i=0;i<size;i++)
        {
            TreeNode* temp =q.front();
            q.pop();
            if(temp->left!=NULL)
                q.push(temp->left);
            if(temp->right!=NULL)
                q.push(temp->right);
            level.push_back(temp->data);
        }
        res.push_back(level);
    }
    return res;
}
void display(vector<vector<int>> res)
{
    for(int i=0;i<res.size();i++)
    {
        for(int j=0;j<res[i].size();j++)
        {
            cout<<res[i][j]<<", ";
        }
    }
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

    cout<<"The level-order traversal is a BFS, the following is a demonstration: "<<endl;
    display(levelorder(root));
    return 0;
}