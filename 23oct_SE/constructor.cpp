#include<iostream>
using namespace std;
class Student
{
	public:
		Student() // default constructor
		{
			cout<<"Welcome to the constructor";
		}
		Student(int a, int b)  // parameterized constructor
		{
			cout<<"\na = "<<a;
			cout<<"\nb = "<<b;
		}
		Student()
		{
			cout<<"Text";
		}
	
		
};
main()
{
	Student s1;
	Student s2(10,20);
	Student s3;
	
}