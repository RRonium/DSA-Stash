#include <iostream>
#include <string>
#include <stack>
using namespace std;
int main()
{
    cout<<"Demonstartion of the usage of stack."<<endl;
    stack<int> pile;
    pile.push(3);
    pile.push(7);
    pile.push(4);
    pile.push(9);
    pile.push(1);

    cout<<pile.top()<<endl;
    cout<<"Stack empty: "<<pile.empty()<<endl;
    cout<<"The size of the stack: "<<pile.size()<<endl;
    
    cout<<"Top of the stack before popping"<<endl;
    cout<<pile.top()<<endl;
    cout<<"Top of the stack after popping the last element."<<endl;
    pile.pop();
    cout<<pile.top()<<endl;
}