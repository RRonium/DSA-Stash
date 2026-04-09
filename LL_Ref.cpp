/*Just declare the head pointer in the main method and then in the insert method that we have, in the formal parameter,
 mention Node*& head...& is the symbol we use for accessing the memory address, so by using "Node*&" we have a head that 
 directly points to the original head instead of using "Node*" which would mean that we're pointing to another address which
 is basically just holding a reference. to the original. This can also be used to refer to global variables.*/
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
void insert(Node*& head, int val)
{
    if(head==nullptr)
        head=new Node(val);
    else
    {
        Node* mover=head;
        while(mover->next!=nullptr)
            mover=mover->next;
        mover->next =new Node(val);
    }
}
void dispLL(Node* head)
{
    try
    {
        if(head==nullptr)
            throw 101;
        for(Node* mover=head;mover!=nullptr;mover=mover->next)
            cout<<mover->data<<" ";
        cout<<endl;
    }
    catch(int err)
    {
        cout<<"Error raised: "<<(err==101?"Empty List":"Error elsewhere");
    }
}
int main()
{
    Node* head=nullptr;
    int ch;
    bool running=true;
    while(running)
    {
        try
        {
            cout<<"1. Insert"<<endl;
            cout<<"2. Display the Linked list"<<endl;
            cout<<"3. Terminate"<<endl;
            cin>>ch;
            switch(ch)
            {
                case 1:
                    cout<<"Enter value pls: "<<endl;
                    int val;
                    cin>>val;
                    insert(head,val);
                    break;
                case 2:
                    cout<<"List at present: "<<endl;
                    dispLL(head);
                    break;
                case 3:
                    running=false;
                    cout<<"Terminated"<<endl;
                    break;
                default:
                    throw 102;
            }
        }
        catch(int err)
        {
            cout<<"Error: "<<(err==102?"Invalid option":"Error elsewhere");
        }
    }
    return 0;
}