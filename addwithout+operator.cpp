#include<iostream>
using namespace std;
int main()
{
	int a,b,add;
	cout<<"enter value of a :";
	cin>>a;
	cout<<"enter value of b :";
	cin>>b;
	add=a-(~b)-1;
	cout<<add;
	return 0;
}
