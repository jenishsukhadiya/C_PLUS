#include<iostream>
using namespace std;
class student
{
	public:
	
	int id;
	char name[20];
	double fees;
	
	student()
	{
		cout<<"enter a id :"<<endl;
		cin>>id;
		cout<<"enter a name :"<<endl;
		cin>>name;
		cout<<"enter a fees :"<<endl;
		cin>>fees;
		}
		
		void display()
		{
			cout<<endl<<id<<"\t"<<name<<"\t"<<fees;
		}
};
main()
{
	student s;
	s.display();
}
