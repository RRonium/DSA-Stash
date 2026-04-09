#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str1="";
    string str2="";
    cout<<"Please enter the 1st String: "<<endl;
    cin>>str1;
    cout<<"Please enter the second string: "<<endl;
    cin>>str2;
    cout<<"Before swap: "<<str1<<" "<<str2<<endl;
    swap(str1,str2);                //demo to use the swap() function
    cout<<"After swap"<<str1<<" "<<str2<<endl;
    return 0;
}
