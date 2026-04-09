#include<iostream>
using namespace std;
class Shape
{
	int length;
	int breadth;
	int area;
	public:
		Shape()
		{
			length=0;
			breadth=0;
		}
		void setParameters()
		{
			int len,bread;
			cout<<"Enter legnth and breadth:";
			cin>>len>>bread;
			length=len;
			breadth=bread;			
		}
		void displayParameters()
		{
			cout<<"Length:"<<length;
			cout<<"Breadth:"<<breadth;
		}
		void draw()
		{
			cout<<"Draw the shape";
		}
		void calculateArea()
		{
		}
	};
		class rectangle:public Shape{
			public:
		void draw()
		{
			cout<<"Draw the Rectangle";
		}	
		};
		class Circle:public Shape{
						public:
		void draw()
		{
			cout<<"Draw the Circle";
		}	
		};
		int main()
		{
			Shape *shape;
			cout<<"Specify what you want to draw:";
			cout<<"R for rectangle"<<endl;
			cout<<"C for circle"<<endl;
			char choice;
			cin>>choice;
			switch(choice)
			{
				case 'R':
				case 'r':
					shape= new rectangle();
					break;
				case 'C':
				case 'c':
					shape= new Circle();
			}
			shape->setParameters();
			shape->displayParameters();
			shape->calculateArea();
			shape->draw();
		}
