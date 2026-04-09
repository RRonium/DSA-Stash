#include <iostream> 
#include <stack>
#include <vector>
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
vector<int> preorderstacktraversal(TreeNode* root)
{
    if(root==nullptr)
        return;
    stack<TreeNode*> s;
    vector<int> res; 
    s.push(root);
    while(!s.empty())
    {
        TreeNode* current=s.top();
        s.pop();
        res.push_back(current->data);
        if(current->right!=nullptr)  s.push(current->right);
        if(current->left!=nullptr) s.push(current->left);
    }
    return res;
}
vector<int> inorderstacktraversal(TreeNode* root)
{ 
    stack<TreeNode*> s;
    vector<int> res;
    TreeNode* current=root;
    while(current!=nullptr||!s.empty())
    {
        while(current!=nullptr)
        {
            s.push(current);
            current=current->left;
        }
        current=s.top();
        s.pop();
        res.push_back(current->data);
        current=current->right;
    }
}
vector<int> postorderstacktraversal(TreeNode* root)
{
    if(root==nullptr)   return;
    stack<TreeNode*> s1;
    stack<TreeNode*> s2;
    vector<int> res;
    s1.push(root);
    while(!s1.empty())
    {
        TreeNode* current=s1.top();
        s1.pop();
        s2.push(current);
        if(current->left!=nullptr)  s1.push(current->left);
        if(current->right!=nullptr) s1.push(current->right);
    }
    while(!s2.empty())
    {
        TreeNode* current=s2.top();
        s2.pop();
        res.push_back(current->data);
    }
}
void display(vector<int> vec)
{
    for(vector<int>::iterator it=vec.begin();it!=vec.end();it++)
    {
        cout<<*it<<", ";
    }
}
int main()
{
    TreeNode* root =new TreeNode(1);
    root->left =new TreeNode(2);
    root->right =new TreeNode(3);
    root->left->left =new TreeNode(4);
    root->left->right =new TreeNode(5);
    root->right->left =new TreeNode(6);
    root->right->right =new TreeNode(7);


    cout<<"Enter the option for what you'd like to do: "<<endl;
    cout<<"1...PreOrder"<<endl;
    cout<<"1...InOrder"<<endl;
    cout<<"1...PostOrder"<<endl;
    int ch;
    cin>>ch;
    switch(ch)
    {
        case 1:
            display(preorderstacktraversal(root));
        case 2:
            display(inorderstacktraversal(root));
        case 3:
            display(postorderstacktraversal(root));
        default:
            cout<<"Invalid choice"<<endl;
    }        
    return 0;
}