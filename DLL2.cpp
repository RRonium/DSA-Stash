#include <iostream>
#include <vector>
using namespace std;
class Node
{
    public:
    int data;
    Node* next;
    Node* prev;
    Node(int data1, Node* prev1=nullptr, Node* next1=nullptr)
    {
        data=data1;
        next=next1;
        prev=prev1;
    }
};
void dispLL(Node* head)
{
    cout<<"Down the DLL: "<<endl;
    Node* mover;
    for(mover=head;mover->next!=nullptr;mover=mover->next)
        cout<<mover->data<<" ";
    cout<<mover->data<<endl;
    cout<<"Up the DLL: "<<endl;
    for(;mover!=nullptr;mover=mover->prev)
        cout<<mover->data<<" ";
    cout<<endl;
}
int main()
{
    vector<int> vec={1,2,3,4,5};
    Node* head =new Node(vec[0]);
    Node* back=head;
    for(int i=1;i<vec.size();i++)
    {
        Node* mover =new Node(vec[i],back,nullptr);
        back->next=mover;
        back=mover;
    }
    dispLL(head);
    return 0;
}