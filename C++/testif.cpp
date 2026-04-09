#include<iostream>
using namespace std;
class constructs
{
    char chr;
    public:
        void acceptCharacter()
        {
            cout<<"Enter a character:";
            cin>>chr;
            if(chr=='A'||chr=='a')
                {
                cout<<endl<<"The character is A";
            }
            else
                {
                    cout<<endl<<"The character is not A";
            }
        }

};
int main()
{
    constructs c1;
    c1.acceptCharacter();
    return 0;
}
