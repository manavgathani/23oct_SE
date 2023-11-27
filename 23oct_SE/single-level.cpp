#include<iostream>
using namespace std;
class Father
{
	public:
		void house()
		{
			cout<<"3 BHK House";
		}
};
class Son : public Father  // class 2 : public class 1
{
	public:
		void car()
		{
			cout<<"\nMercedez car";
		}
};
main()
{
	Son sobj;
	sobj.house();
	sobj.car();
}