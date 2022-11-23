#include<iostream>
using namespace std;
class abc
{
	public:
		int x;
		void getdata()
		{
			cout<<"enter a value of x="<<endl;
			cin>>x;
		}
};
class pqr :public abc
{
	public:
		int y;
		void setdata()
		{
			cout<<"enter a value of y ="<<endl;
			cin>>y;
		}
		void mult()
		{
			cout<<"multiplication ="<<x*y<<endl;
		}
};
main()
{
	pqr p;
	p.getdata()
	p.setdata()
	p.mult()
};
