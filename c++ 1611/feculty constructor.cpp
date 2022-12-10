#include<iostream>
using namespace std;
class feculty
{
	public:
	
	int id;
	char name[20];
	char designation[30];
	int contact;
	char email[30];
	
	
	feculty()
	{
		cout<<"enter a id :"<<endl;
		cin>>id;
		
		cout<<"enter a name :"<<endl;
		cin>>name;
		
		cout<<"enter a designation :"<<endl;
		cin>>designation;
		
		cout<<"enter a email :"<<endl;
		cin>>email;
		
		cout<<"enter a contact :"<<endl;
		cin>>contact;
	}
		
		void display()
		{
			cout<<endl<<id<<"\t"<<name<<"\t"<<designation<<"\t"<<email<<"\t"<<contact;
		}
};
main()
{
	feculty f;
	f.display();
	
}
