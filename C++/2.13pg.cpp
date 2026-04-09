#include<iostream>
using namespace std;
class car()
{
	float price;
	int mileage;
	char model[30];
	
	public:
		void display()
		{
			cout<<"\n The Model of car is \t"<<model;
			cout<<"\n The price is \t"<<price;
			cout<<"\n The average mileage is:\t"<<mileage;
		}
		void accept
		{
			cout<<"\n Enter the Model of the city";
			cin>>model;
			cout<<"\n Enter Price of a Model";
			cin>>price;
			cout<<"\n Enter Company Quoted Mileage \t";
			cin>>mileage;
		}
};
int main()
{
	car car_det [2];
	car_det[0].accept;
	car_det[1].accept;
	car_det[0].display;
	car_det[1].display;
}
