#include<stdio.h>
#include<conio.h>
int main()
{
	long num,sum=0,digit, temp;
	printf("enter the number:");
	scanf("%d",&num);
	temp= num;
	while(num>0)
	{
		digit= num%10;
		sum=sum+digit;
		num /= 10;
	}
	printf("given number = %d\n",temp);
	printf("sum of numbers are %d= %d\n",temp , sum);
}
