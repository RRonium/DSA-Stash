#include "Interchange.h"
#include<iostream.h>
Interchange::Interchange()
{
     var1=5;
            var2=10;
}
void Interchange:: swap()
        {
            temp=var1;
            var1=var2;
            var2=temp;
        }
        void Interchange:: display()
        {
            cout<<"Var1:"<<var1<<endl;
            cout<<"Var2:"<<var2<<endl;
        }
int main()
{
    Interchange i;
    i.display();
}
