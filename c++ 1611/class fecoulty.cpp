#include<iostream>
using namespace std;
class faculty
{
	int id, mob;
	char email[20], name[20];
	
	
	public:
	void inputdata() //FUNCTION
	{		
		
		
		cout<<"enter name :"<<endl;
		gets(name);
		
		cout<<"enter email :"<<endl;
		gets(email);
		
		fflush(stdin);
		
		cout<<"enter id ="<<endl;
		cin>>id;
		
		cout<<"enter mob :"<<endl;
		cin>>mob;
	 } 
	 
	 void displaydata()
	 {
	 	cout<<"\n id="<<id;
	 	cout<<"\n name="<<name;
	 	cout<<"\n mob="<<mob;
	 	cout<<"\n email="<<email;
	 }
};
main()
{
	faculty f1;
	f1.inputdata();
	f1.displaydata();
	
}
