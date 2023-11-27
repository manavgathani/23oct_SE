#include<iostream>
using namespace std;
class Parent
{
	public:
		void parent()
		{
			cout<<"\nParents";
		}
};
class Child1: public Parent
{
	public:
		void child1()
		{
			cout<<"\n First Child";
		}
};
class Child2: public Parent
{
	public:
		void child2()
		{
			cout<<"\n Second Child";
		}
};
main()
{
	Child1 c1;
	Child2 c2;
	
	c1.parent();
	c1.child1();
	
	c2.parent();
	c2.child2();
}