#include<iostream>
using namespace std;
main()
{
	int n,sum=0,fd,id;
	cout<<"enter a num to first & last degit=";
	cin>>n;
	
	id=n%10;
	
	while(n>=10)
	{
		n=n/10;
	}
	fd=n;
	sum=fd+id;
	cout<<"sum of first and last digit="<<sum;
}

