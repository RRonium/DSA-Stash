#include <iostream>
#include <string>
#include <queue>
using namespace std;
int main()
{
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);

    cout<<"Front of the queue: "<<q.front()<<endl;
    cout<<"Back of the queue: "<<q.back()<<endl;
    //popping an element from the front
    q.pop();
    cout<<q.front()<<endl;
    cout<<"The size of the queue: "<<q.size()<<endl;
    cout<<"Is the queue empty?..."<<q.empty()<<endl;
    return 0;
}