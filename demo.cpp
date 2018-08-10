#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
void demo(int n);
main()
{

	int a;
cin>>a;
	demo(a);
		getch();
		
	
}


void demo(int n)
{
	

for( int i=1;i<n;i++)
{
	
	
	if(i%3==0 && i%5==0)
	{
		cout<<"FizzBuzz\n";
		
	}
	
	if(i%3==0)
	{
		cout<<"Fizz\n";
	}
	
	if(i%5==0)
	{
		cout<<"Buzz\n";
	}
	if(i%3!=0 && i%5!=0)
	{
	
		cout<<i<<"\n";
		}
	}	
	
}
