#include<iostream>
using namespace std;
class Student
{
	public:
		int a,b;
		void inputData(int a, int b)
		{
			this->a = a;
			this->b = b;
		}
		void displayData()
		{
			cout<<"\n a = "<<a;
			cout<<"\n b = "<<b;
		}
};
main()
{
	Student obj1;
	obj1.inputData(10,20);
	obj1.displayData();
}