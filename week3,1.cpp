#include<iostream>
using namespace std;
int main()
{
	int n, a, b;
	char ch;
	cout<<"enter the two numbers:";
	cin>>a>>b;
	cout<<"enter the operator that you want to use :";
	cout<<"1, +"<<endl<<"2,-"<<endl<<"3,*"<<endl<<"4,/"<<endl<<"5,%";
	cin>>ch;
	switch(ch)
	{
		case '+': 
		{
			cout<<"addition of two numbers are :"<<a+b;
		    break ;
		}
		
		case '-':{
			
		cout<<"substraction of two numbers are:"<<a-b;
		   break ;
	}
		case '*': {
			
		cout<<"multiplication of two numbers are"<<a*b;
		   break ;
	}
		case '/': {
			
		cout<<"division of two numbers are"<<a/b;
		   break;
	}
		case '%':{
			
		 cout<<"modulus of two numbers are"<<a%b;
		   break;
	}
			
			default:{ cout<<"invalid input";
				break;
			}}
}
