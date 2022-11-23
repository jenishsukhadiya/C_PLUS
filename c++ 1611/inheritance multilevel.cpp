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
};
class edh :public pqr
{
		public:
		int z;
		void wetdata()
		{
			cout<<"enter a value of z="<<endl;
			cin>>z;
		}
		
		void mult()
		{
			cout<<"multiplication ="<<x*y*z<<endl;
		}
};
main()
{
	edh e;
	e.getdata();
	e.setdata();
	e.wetdata();
	e.mult(); 
}
