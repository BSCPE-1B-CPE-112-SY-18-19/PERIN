#include<stdio.h>
/*FLORES*/
main(){
long num[1000],s,range,real,x,i,temp,count,factor;
clrscr();
printf("Inputs:   ");
scanf("%ld",&range);
s=0;
real=2;

for(i=0;i<range-1;i++)
	{
	num[i]=real;
	real++;
	}

printf("Wasteful Number: ");
for(i=0;i<range-1;i++)
	{
	temp=num[i];
	x=0;
	factor=2;
	for(;temp!=1;)
	{
	if(temp%factor!=0)
	{
	factor++;
	}
		else
		{
		temp=temp/factor;
		x++;
		}
	}
	temp=num[i];
	s=0;
		for(;temp!=0;)
		{
		temp=temp/10;
		s++;
		}


	if(x>s)
	{
	 temp=num[i];
	 x=0;
	 factor=2;
	 printf(" %ld ",num[i] );
		for(;temp!=1;)
		{
		 if(temp%factor!=0)
		 {
		 factor++;
		 }
		else
			{

			temp=temp/factor;
			x++;
}
}


}


}
getch();
}