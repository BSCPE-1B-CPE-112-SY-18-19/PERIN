#include<stdio.h>
main(){
long x[1000],i,range,real,b,a,temp,count,factor;
clrscr();
	printf("range: ");
	scanf("%ld",&range);
a=0;
real=2;
for(i=0;i<range-1;i++)
{
	x[i]=real;
	real++;
}

printf("Wasteful Nums: ");
for(i=0;i<range-1;i++)
{
	temp=x[i];
	b=0;
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
	b++;
}
}
temp=x[i];
a=0;
for(;temp!=0;)
{
	temp=temp/10;
	a++;
}


if(b>a)
{
	temp=x[i];
	b=0;
	factor=2;
	printf(" %ld ",x[i] );
	for(;temp!=1;)
 {
	if(temp%factor!=0)
 {
	factor++;
 }
 else
{

	temp=temp/factor;
	b++;}
}
}


}
getch();
}