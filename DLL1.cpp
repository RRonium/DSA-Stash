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
void insert(Node*& head, int val)
{
    Node* mover;
    for(mover=head;mover->next!=nullptr;mover=mover->next);
    Node* temp =new Node(val,mover,nullptr);
    mover->next=temp;
}
//we're able to do this because for displaying the DLL we don't need to have direct access to the head of the DLL, we just need a reference so that we can just cascade down the DLL and display all the data in all the nodes.
void dispLL(Node* head)             
{
    cout<<"Down the DLL: "<<endl;
    Node* mover;
    for(mover=head;mover->next!=nullptr;mover=mover->next)
    {
        cout<<mover->data<<" ";
    }
    cout<<mover->data;
    cout<<endl;
    cout<<"Up the DLL: "<<endl;
    for(;mover!=nullptr;mover=mover->prev)
    {
        cout<<mover->data<<" ";
    }
}
int main()
{
    vector<int> vec={1,2,3,4,5};
    Node* head =new Node(vec[0]);
    Node* back=head;
    Node* mover;
    for(int i=1;i<vec.size();i++)
    {
        //u must establish a two way connection
        mover =new Node(vec[i],back,nullptr);
        back->next=mover;
        back=mover;
    }
    dispLL(head);
    cout<<"Now we're gonna see the result of us adding a new node to a DLL."<<endl;
    insert(head,6);
    dispLL(head);
    return 0;
}