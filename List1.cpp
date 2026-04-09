#include <iostream>
#include <string>
#include <list>
using namespace std;
void display(list<string> l)
{
    for(string i : l)
    {
        cout<<i<<", ";
    }
    cout<<endl;
}
int main()
{   
    list<string> l1 = {"Sannidhya","Ankan","Pramit","Misha"};
    cout<<"The list \"l1\" is: "<<endl;
    display(l1);
    //In a list, unike in vectors where u can push and pop only from the back, you can also push and pop from the front
    cout<<"pushing front..."<<endl;
    l1.push_front("Soham");
    display(l1);
    cout<<"popping back..."<<endl;
    l1.pop_back();
    display(l1);
    cout<<"pushing back..."<<endl;
    l1.push_back("Pratik");
    display(l1);
    cout<<"popping front..."<<endl;
    l1.pop_front();
    display(l1);
    return 0;
}