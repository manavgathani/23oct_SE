#include<iostream>
using namespace std;
class Student
{
	public:// Access modifiers
		int id;       // data member
		string name;
		string subject;
		
		void inputdata()  // member function(method)
		{
			cout<<"Enter the ID:";
			cin>>id;
			cout<<"\nEnter the name:";
			cin>>name;
			cout<<"\nEnter the subject:";
			cin>>subject;
		}
		void displaydata()
		{
			cout<<"\n Student ID:"<<id;
			cout<<"\n Student name:"<<name;
			cout<<"\n Student subject:"<<subject;
		}
};
class Faculty
{
	public:
		int id;   // data members
		string name;
		string department;
		
		void inputdata()   // member function
		{
			cout<<"\n Enter the Faculty ID:";
			cin>>id;
			cout<<"\n Enter the Faculty Name:";
			cin>>name;
			cout<<"\n Enter the Faculty Department";
			cin>>department;
		}
		void displaydata()
		{
			cout<<"\n Faculty ID:"<<id;
			cout<<"\n Faculty Name:"<<name;
			cout<<"\n Faculty Department:"<<department;
		}
};
main()
{
	//object creation+
	Student sobj;
	Faculty fobj;
	sobj.inputdata();
	sobj.displaydata();
	
	fobj.inputdata();
	fobj.displaydata();
}