#include <iostream> 
using namespace std;  
int main() 
{ 
	int n, i=0, sum = 0; 
	cout<<"Enter 10 no:"<<endl; 
	while(i<10)
	{ 
	    cin>>n;
		sum =sum+n;  
		i++; 
	} 
	 
	cout <<"The sum of 10 number is: " <<sum<< endl; 
	return 0; 
} 
