#include <iostream>
using namespace std;  
main()  
{  
	int rev=0,num=0,ram;
    cout<<"enter a num:"<<endl;
	cin>>num;
	while(num!=0)
	{
	 ram=num%10;
	 rev=rev*10+ram;
	 num/=10;
	
	}
	cout<<"reverse number :"<<rev;
    
    
      
      
     
      
}  
