#include <iostream>
using namespace std;
class ArrayQueue
{
    public:
        int rear=-1;
        void enqueue(int arr[],int val,int len)
        {
            if(rear==len-1)
            {
                cout<<"Overflow"<<endl;
                return;
            }
            arr[++rear]=val;
        }
        void dequeue(int arr[])
        {
            if(rear==-1)
            {
                cout<<"Underflow"<<endl;
                return;
            }
            for(int i=0;i<rear;i++)
                arr[i]=arr[i+1];
            rear--;
        }
        int getFront(int arr[])
        {
            return arr[0];
        }
        int getRear(int arr[])
        {
            if(rear == -1)
            {
                cout<<"Queue is empty!"<<endl;
                return -1;
            }
            return arr[rear];  
        }
        void disp(int arr[])
        {
            for(int i=0;i<=rear;i++)
            {
                cout<<arr[i]<<" ";
            }
            cout<<endl;
        }
};
int main()
{
    ArrayQueue obj;
    int arr[5];
    int len=5, ch;
    bool run=true;
    while(run)
    {
        cout<<"1...Enqueue"<<endl;
        cout<<"2...Dequeue"<<endl;
        cout<<"3...getFront"<<endl;
        cout<<"4...getRear"<<endl;
        cout<<"5...Display Queue"<<endl;
        cout<<"6...Exit"<<endl;
        cin>>ch;
        switch(ch)
        {
            case 1:
                cout<<"Enter value;"<<endl;
                int n;
                cin>>n;
                obj.enqueue(arr,n,len);
                break;
            case 2:
                obj.dequeue(arr);
                break;
            case 3:
                cout<<obj.getFront(arr);
                break;
            case 4:
                cout<<obj.getRear(arr);
                break;
            case 5:
                obj.disp(arr);
                break;
            case 6:
                run=false;
                break;
            default:
                cout<<"Invalid input"<<endl;
                break;
        }
    }
}