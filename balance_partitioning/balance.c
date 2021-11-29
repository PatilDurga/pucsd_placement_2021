#include<stdio.h>
#include<stdlib.h>
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
nt fun(int *arr, int l)
{	
	
	long i, a = 0, b = 0, lsum = 0, rsum = 0, d = INT_MAX;	
 int resind = 0;	
 for (i = 1; i < l - 1; i++)	{		
	 a = calsum(arr, 0, i - 1);		
	 b = calsum(arr, i + 1, l- 1); 		
	 int c = abs(a - b); 		
	 if (c < d)
	 {			
		 resind = i;			
		 d = c;			
		 lsum = a;			
		rsum = b; 
	 }
	 
	 
 }
int calsum(int *arr,int l)
{
}

	

int main(int argc,char * arg[])
{
	int n,arr[1000000];
	n = atoi(arg[1]);
	for(int i=0;i<n;i++)
	{
		arr[i]=2*i+4;
	}
	/*for(int i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}*/
	
	printf("\n Minimum diffrence between subsets : %d\n",findMin(arr,n));
	printf("\n  %d\n",fun(arr,n));
	
	
	return 0;
	

}

 
