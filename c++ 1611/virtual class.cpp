#include<iostream>
using namespace std;
class base 
{
	public:
		int x;
};
class derived1 : virtual public base
{
	public:
		int a;
};
class derived2 : virtual public base
{
	public:
	int b;	
};

class child : public derived1,public derived2
{
	public :
	void add()
	{
		cout<<x+a+b;
		}	
};
main()
{
	child ob;
	ob.x=10;
	ob.a=20;
	ob.b=30;
	ob.add();
}
