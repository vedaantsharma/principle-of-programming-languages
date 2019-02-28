#include<iostream>
using namespace std;
int main()
{
	int n, a, b;
	cout<<"enter the two numbers:";
	cin>>a>>b;
	cout<<"enter the operator that you want to use :";
	cout<<"1, +"<<endl<<"2,-"<<endl<<"3,*"<<endl<<"4,/"<<endl<<"5,%";
	cin>>n;
	switch(n)
	{
		case 1: 
		{
			cout<<"addition of two numbers are :"<<a+b;
		    break ;
		}
		
		case 2:{
			
		cout<<"substraction of two numbers are:"<<a-b;
		   break ;
	}
		case 3: {
			
		cout<<"multiplication of two numbers are"<<a*b;
		   break ;
	}
		case 4: {
			
		cout<<"division of two numbers are"<<a/b;
		   break;
	}
		case 5:{
			
		 cout<<"modulus of two numbers are"<<a%b;
		   break;
	}
			
			default:{ cout<<"invalid input";
				break;
			}}
}
