#include<stdio.h>
#include<stdlib.h>
int calAng(double h,double m)
{
	if(h<0||m<0||h>12||m>60)
	{
		printf("Wrong input \n");
	}
	if(h==12)
	h=0;
	if(m==60)
	{
		m=0;
		h=h+1;
		if(h>12)
		h=h-12;
	}
	int angl1= 0.5*(h*60+m);
	int angl2= 6*m;
	
	int angle = abs(angl1-angl2);
	 
	angle = min(360-angle, angle);
	return angle;


}

int min(int x, int y)
{
	return(x<y)? x: y ;

}

int main(int argc,char * arg[])
{
	double hr,min;
	hr = atoi(arg[1]);
	min= atoi(arg[2]);
	printf("%d\n",calAng(hr,min));
	return 0;

}
