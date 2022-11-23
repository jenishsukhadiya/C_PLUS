#include<iostream>
using namespace std;
class student
{
	int id;
	char name[20];
	
	public:
	void inputdata()
	{
		cout<<"enter id =";
		cin>>id;
		fflush(stdin);
		
		cout<<"enter name :";
		gets(name);
	 } 
	 
	 void displaydata()
	 {
	 	cout<<"\n id="<<id;
	 	cout<<"\n name="<<name;
	 }
};
main()
{
	student s1;
	s1.inputdata();
	s1.displaydata();
}
