#include <iostream>
using namespace std;
class ArrayStack
{
    public: 
        int top=-1;
    public:
        void push(int arr[],int val)
        {
            if(top>=4)
                cout<<"Overflow"<<endl;
            else
                arr[++top]=val;
        }
    public:
        int pop(int arr[])
        {
            if(top==-1)
            {
                cout<<"Underflow"<<endl;
                return -1;
            }
            else
                return arr[top--];
        }
    public:
        void disp(int arr[])
        {
            for(int i=0;i<=top;i++)
                cout<<arr[i]<<" ";
        }
};
int main()
    {
        ArrayStack obj;
        int arr[5];
        cout<<"Enter 3 values: ";
        for(int i=0;i<3;i++)
        {
            int n;
            cin>>n;
            obj.push(arr,n);
        }
        for(int i=0;i<3;i++)
            cout<<obj.pop(arr)<<" ";
        return 0;
    }