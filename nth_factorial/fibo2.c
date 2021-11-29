#include<stdio.h>
long int fibonum(int n)
{
	if(n<1)
	  return n;
	if(n==1)
	  return 2;
	
	return ((4*fibonum(n-1))+fibonum(n-2)); 

}
int main(int argc,char * arg[])
{
	int n;
	n = atoi(arg[1]);
	printf("%ld\n",fibonum(n));
	return 0;
	

}
