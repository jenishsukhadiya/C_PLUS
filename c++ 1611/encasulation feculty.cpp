#include<iostream>
using namespace std;
class feculty
{
	int id;
	string name;
	string email;
	
	
	public:
		void setid(int id)
		{
			this ->id=id;
			
		}
		int getid()
		{
			return id;
		}
		void setname(string name)
		{
			this ->name=name;
		}
		string getname()
		{
			return name;
		}
		void setemail(string email)
		{
			this -> email=email;
			
		}
		string getemail()
		{
			return email;
		}
};
main()
{
	feculty f;
	f.setid(101);
	cout<<"\n id="<<f.getid();
	
	f.setname("j bhai");
	cout<<"\n name="<<f.getname();
	
	f.setemail("jenishsukhadiya1005@gamil.com");
	cout<<"\n email="<<f.getemail();
}
