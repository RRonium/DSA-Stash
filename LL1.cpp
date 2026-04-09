#include <iostream>
#include <string>
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
void insert(Node* head, int data)
{
    Node* mover=head;
    if(mover==nullptr)
        mover->data=data;
    else
    {
        while(mover->next!=nullptr)
        {
            mover=mover->next;
        }
        mover->next =new Node(data,nullptr);
    }

}
void dispLL(Node* head)
{
    for(Node* i=head;i!=nullptr;i=i->next)
    {
        cout<<i->data<<" ";
    }
}
int main()
{
    /*Node* z =new Node(3,nullptr);
    Node* y =new Node(2,z);*/
    Node* x =new Node(1);
    insert(x,1);
    insert(x,2);
    dispLL(x);
    return 0;
}