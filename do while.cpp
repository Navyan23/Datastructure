#include <iostream> 
using namespace std;  
int main()   
{ 
	int n,sum=0,i=0;
	cout<<"Enter 10 numbers:"<<endl;
	do
	{ 
		cin>>n;
		sum=sum+n; 
		i++; 
	}
	while(i<10) ;
	 
	cout <<"The sum of numbers 10 numbers is " << sum<<endl; 
	return 0; 
} 
