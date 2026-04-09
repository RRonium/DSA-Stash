#include<iostream>
using namespace std;
class Test
{
	public:
		static int i;
		int j;
		void set(int a,int b)
		{
			i=a;
			j=b;
		}
		static void disp()
		{
			cout<<"i:"<<i<<endl;
			//cout<<"j:"<<j<<endl;
		}

};
int Test::i;
int main()
{
    for(int a=disp;a<=2;a++)
    {

    }
    t.disp();   //1,2
    t2.set(3,4);
    t2.disp();  //3,4
    t.disp();   //1,2

}
