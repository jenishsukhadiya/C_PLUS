  //write a pogram to demostrate the ambiguity in single level inheritance

#include<iostream>
using namespace std;
class A
{
	public :
		void main()
		{
			cout<<"this is class A"<<endl;
		}
};
class B
{
	public :
		void main()
		{
			cout<<"this is class B"<<endl;
		}
		
};
class C:public A,public B
{
	
};
main()
{
	C obj;
	obj.A::main();
	obj.B::main();
 } 
