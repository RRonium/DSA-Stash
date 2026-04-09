 #include<iostream>
 using namespace std;
 class student
 {
 	public: 
 	int rollNo;
 	char  name[30];
 	float score;
 };
 void askDetails(student &);
 int main()
 {
 	student object;
 	askDetails(object);
 	cout<<endl<<"The student details are"<<endl;
 	cout<<"Roll number:" <<object.rollNo<<endl;
 	cout<<"Name:"<<object.name<<endl;
 	cout<<"Score:"<<object.score<<endl;
	 return 0; 	
 }
 void askDetails(student &obj)
 {
 	cout<<"Please enter the student details"<<endl;
 	cout<<endl<<"Enter roll number of student: ";
 	cin>> obj.rollNo;
 	cout<<endl<<"Enter firstname of student:";
 	cin>> obj.name;
 	cout<<endl<<"Enter score of student:";
 	cin>>obj.score;
 	return;
 }
 
