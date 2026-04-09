#include <iostream>
#include <vector>
using namespace std;
class Node
{
    public:
    int data;
    Node* next;
    Node* prev;
    Node(int data1,Node* prev1=nullptr,Node* next1=nullptr)
    {
        data=data1;
        next=next1;
        prev=prev1;
    }
};
int main()
{
    vector<int> nums={0,1,2,3,4,5,6,7,8,9};
    Node dummy(0);
    Node* mover=&dummy;
    for(int i=0;i<nums.size();i++)
    {
        mover->next =new Node(nums[i],mover,nullptr);
        mover=mover->next;
    }
    return 0;
}