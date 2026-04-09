#include <iostream>
#include <string>
#include <set>
using namespace std;
void displayAsc(set<int> s)
{
    for(int i : s)
    {
        cout<<i<<", ";
    }
    cout<<endl;
}
void displayDesc(set<int, greater<int>> s)
{
    for(int i : s)
    {
        cout<<i<<", ";
    }
    cout<<endl;
}
int main()
{
    set<int> set1 ={3,2,7,5,0,8};
    set<int , greater<int>> set2 ={3,2,7,5,0,8};
    cout<<"The Set: "<<endl;
    displayAsc(set1);
    displayDesc(set2);
    //adding elements to the set "set1"
    set1.insert(6);
    displayAsc(set1);
    set1.erase(6);
    displayAsc(set1);
    cout<<"Before empty..."<<endl;
    displayDesc(set2);
    set2.clear();
    cout<<"Post empty..."<<endl;
    cout<<"Is the Set empty? 1...Yes 0...NO -->"<<set2.empty()<<endl;
    cout<<"The size of set1 is: "<<set1.size()<<endl;
    
    return 0;
}