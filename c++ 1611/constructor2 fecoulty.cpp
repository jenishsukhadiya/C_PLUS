#include<iostream>
using namespace std;
class fecoulty
{
	int idno;
	char name[20];
	string contact;
	char email[20];
	
	public:
		fecoulty();
		void display();
		
};
fecoulty::fecoulty()
{
	cout<<"enter a id no=";
	cin>>idno;
	 
	 fflush(stdin);
	 
	cout<<"enter a name=";
	cin>>name;
	fflush(stdin);
	
	cout<<"enter a contact=";
	cin>>contact;
	
	cout<<"enter a email=";
	cin>>email;
}
void fecoulty::display()
{
	cout<<endl<<idno<<"\t"<<name<<"\t"<<contact<<"\t"<<email;
}
main()
{
	fecoulty f;
	f.display();
}
