#include<stdio.h>
#include<stdlib.h>
int calAng(double h,double m,double s)
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
	if(s==60)
	{
		s=0;
		m=m+1;
		
	}
	
	int angl1 = (h*360)/12+(m*360)/(12*60)+(s*360)/60;
	int angl2=(m*360)/(12*60);
	int angl3=(s*360)/60;
	
	int angle = abs(angl2-angl3);
	/*if(angle>180)
	{
		360-angle;
	}*/
	 
	angle = min(360-angle, angle);
	return angle;


}

int min(int x, int y)
{
	return(x<y)? x: y ;

}

int main(int argc,char * arg[])
{
	double hr,min,sec;
	hr = atoi(arg[1]);
	min= atoi(arg[2]);
	sec= atoi(arg[3]);
	printf("%d\n",calAng(hr,min,sec));
	return 0;

}
