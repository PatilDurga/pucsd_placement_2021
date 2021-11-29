#include<stdio.h>
int fibonum(int n)
{
	if(n<=1)
	{
		return n; 
	}
	
	return fibonum(n-1)+ fibonum(n-2);

}
void main(int argc,char * arg[])
{
	int n,l=0,p=1,cur,cnt;
	n = atoi(arg[1]);
	printf("%d",fibonum(n));
	return 0;
	

}


