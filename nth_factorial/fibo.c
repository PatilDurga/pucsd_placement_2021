#include<stdio.h>
int fibonum(int n)
{
	
	int a=0 , b=1 , temp ,i;
	if(n==0)
	{
		return a; 
	}
	for(i=2;i<=n;i++)
	{
		temp=a+b;
		a=b;
		b=temp;
	}
	return b;

}
void main(int argc,char * arg[])
{
	int n;
	n = atoi(arg[1]);
	printf("%d\n",fibonum(n));
	return 0;
	

}




