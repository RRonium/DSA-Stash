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
void insert(Node *&front, Node *&rear, int data)
{
    if(front==nullptr && rear==nullptr)
    {
        front =new Node(data);
        rear=front;
        rear->next=front;
        return;
    }
    if(front==rear)
    {
        rear->next =new Node(data);
        rear=rear->next;
        rear->next=front;
        return;
    }
    Node* newNode =new Node(data);
    newNode->next=front;
    rear->next=newNode;
    rear=newNode;
}
void display(Node *&front, Node *&rear)
{
    Node* mover;
    for(mover=front;mover!=rear;mover=mover->next)
        cout<<mover->data<<" ";
    cout<<mover->data<<" "<<mover->next->data<<endl;
}
int main()
{
    Node* front=nullptr;
    Node* rear=nullptr;
    vector<int> vec={1,2,3,4,5};    
    for(int i=0;i<vec.size();i++)
        insert(front,rear,vec[i]);
    display(front,rear);
    return 0;
}