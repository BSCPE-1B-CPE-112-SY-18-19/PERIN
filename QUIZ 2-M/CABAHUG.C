#include<stdio.h>
main(){
long num[1000];
long i,range,real,j,k,temp,count,factor;
clrscr();

printf("Range: ");
scanf(" %ld", &range);
k=0;
real=2;
for(i=0;i<range-1;i++)
{
     num[i]=real;
     real++;
}

printf("Wasteful Nums: ");
for(i=0; i<range-1; i++)
{
    temp=num[i];
    j=0;
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
	   j++;
	   }
	}
    temp=num[i];
    k=0;
       for(;temp!=0;)
       {
	  temp=temp/10;
	  k++;
	  }

	if(j>k)
	{
	   temp=num[i];
	   j=0;
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
	      j++;
	      }
	   }

	}


}
getch();
}