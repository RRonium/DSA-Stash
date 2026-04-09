#include <iostream>
#include <vector>
using namespace std;
class Node
{
    public:
    int data;
    Node* next;
    Node(int data1, Node* next1=nullptr)
    {
        data=data1;
        next=next1;
    }
};
void insert_end(Node* &head, int val)
{
    Node* mover;
    for(mover=head;mover->next!=nullptr;mover=mover->next);
    mover->next =new Node(val);
}
void insert_front(Node* &head, int val)
{
    Node* new_head =new Node(val);
    new_head->next=head;
    head=new_head;
}
void delete_end(Node* &head)
{
    Node* mover;
    for(Node* mover=head;mover->next->next!=nullptr;mover=mover->next);
    mover->next=nullptr;
}
void delete_front(Node* &head)
{
    head=head->next;
}
void insert_at_position(Node* &head, int pos, int val)
{
    if(pos==0)
    {
        Node* new_node =new Node(val);
        new_node->next=head;
        head=new_node;
        return;
    }
    Node* prev=head;
    for(int i=1;i<pos && prev!=nullptr;i++)
        prev=prev->next;
    if(prev==nullptr)
        return;
    Node* new_node =new Node(val);
    new_node->next=prev->next;
    prev->next=new_node;
}
void display(Node* head)
{
    for(Node* mover=head;mover!=nullptr;mover=mover->next)
        cout<<mover->data<<" ";
    cout<<endl;
}
int main()
{
    Node dummy(0);
    Node* mover=&dummy;
    vector<int> nums={0,1,2,3,4,5,6,7,8,9};
    for(int i=0;i<nums.size();i++)
    {
        mover->next =new Node(nums[i]);
        mover=mover->next;
    }
    Node* head=dummy.next;
    return 0;
}