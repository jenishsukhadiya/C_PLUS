#include<iostream>
using namespace std;
class student
{
	int rno;
	char name[20];
	string contact;
	
	public:
		student();
		void display();
		
};
student::student()
{
	cout<<"enter a rall no=";
	cin>>rno;
	 
	 fflush(stdin);
	 
	cout<<"enter a name=";
	cin>>name;
	fflush(stdin);
	
	cout<<"enter a contact=";
	cin>>contact;
}
void student::display()
{
	cout<<endl<<rno<<"\t"<<name<<"\t"<<contact;
}
main()
{
	student s;
	s.display();
}
