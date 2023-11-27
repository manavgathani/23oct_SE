#include<iostream>
using namespace std;
class Grandfather
{
	public:
		void land()
		{
			cout<<"100 Acres of land";
		}
};
class Father: public Grandfather
{
	public:
		void house()
		{
			cout<<"\n4 BHK House";
		}
};
class Son: public Father
{
	public:
		void car()
		{
			cout<<"\nAudi car";
		}
};
main()
{
	Son s;
	s.land();
	s.house();
	s.car();
}