#include <iostream>
#include <string>
#include <deque>
using namespace std;
void display(deque<int> dq)
{
    for(int i : dq)
    {
        cout<<i<<", ";
    }
    cout<<endl;
}
int main()
{
    deque<int> dq={4,3,7,5,1};
    display(dq);
    cout<<"The front-most element of the deque: "<<dq.front()<<endl;
    cout<<"The back-most elemtnt of the deque is: "<<dq.back()<<endl;
    cout<<"Demonstration of the usage of .at() by dusplaying th e3rd element: "<<dq.at(2)<<endl;
    cout<<"Changing of elements in a deque is permitted...(1st element ids being changed) "<<endl;
    dq[0]=8;
    cout<<"The new first element is: "<<dq.front()<<endl;
    cout<<"Pushing front..."<<endl;
    dq.push_front(0);
    cout<<"Pushing back..."<<endl;
    dq.push_back(0);
    cout<<"The deque now: "<<endl;
    display(dq);
    cout<<"Popping front..."<<endl;
    dq.pop_front();
    cout<<"Popping back..."<<endl;
    dq.pop_back();
    cout<<"The deque now: "<<endl;
    display(dq);
    cout<<"Size of the deque rn: "<<dq.size()<<endl;
    cout<<"Is the deque empty? :"<<dq.empty()<<endl;
    
    return 0;
}