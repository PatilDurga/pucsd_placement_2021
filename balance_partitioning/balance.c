#include<stdio.h>
int rec(int arr[] , int i, int sum , int totsum)
{

	if(i==0)
	   return abs((totsum-sum)-sum);
	   
	return min(rec(arr,i-1,sum+arr[i-1],totsum),rec(arr,i-1,sum,totsum));

}
int min(int x, int y)
{
	return(x<y)? x: y ;

}

int findMin(int arr[],int n)
{
	int totsum=0;
	for(int i=0;i<n;i++)
		totsum += arr[i];
		
	return rec(arr , n , 0 , totsum);

}

int main(int argc,char * arg[])
{
	int n,arr[1000000];
	n = atoi(arg[1]);
	for(int i=0;i<n;i++)
	{
		arr[i]=2*i+4;
	}
	for(int i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
	
	printf("\n Minimum diffrence between subsets : %d\n",findMin(arr,n));
	return 0;
	

}

 
