						//polymorphism function overriding

#include<iostream>
using namespace std;
class A
{
	public:
		void display()
		{
			cout<<"\n hello A";
		}
};

class B : public A
{
	public:
		void display()
		{
			A::display();
			cout<<"\n hello B";
			
		}
};

main()
{
	B obj;
	obj.display();
}
