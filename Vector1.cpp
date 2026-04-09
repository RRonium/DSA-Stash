#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
void display(vector<string> vec)
{
    //Sorting algos
    sort(vec.begin(),vec.end());
    //iterator is technically a type of a pointer
    vector<string>::iterator it;
    //For a generic case we can also use auto
    // auto it = vec.begin();
    for(it=vec.begin(); it!=vec.end(); it++)
    {
        cout<<*it<<", ";
    }
    cout<<endl;
}
int main()
{
    cout<<"This is a Demonstration of the operations that can be conducted on vectors."<<endl;

    vector<string> vec={"Sannidhya","Ankan","Pramit","Misha"};
    cout<<"The front of the vector: "<<vec.front()<<endl;
    cout<<"The back of the vector: "<<vec.back()<<endl;
    cout<<"The size of the vector: "<<vec.size()<<endl;

    cout<<"Using Foreach to iterate through the vector \"vec\" "<<endl;
    for(string i : vec)
    {
        cout<<i<<endl;
    }
    cout<<"Using push_back methods in the vector."<<endl;
    vec.push_back("Soham");
    cout<<"The vector now:"<<endl;
    for(string i : vec)
    {
        cout<<i<<", ";
    }
    cout<<endl;
    vec.pop_back();
    cout<<"After popping: "<<endl;
    for(string i : vec)
    {
        cout<<i<<", ";
    }
    cout<<endl;
    cout<<"the second element: "<<endl;
    //Choose any one
    cout<<vec.at(1)<<endl;
    //cout<<vec[1]<<endl;
    cout<<"Is the vector empty? 1 if yes, 0 if no..."<<vec.empty()<<endl;
    display(vec);
    return 0;
}