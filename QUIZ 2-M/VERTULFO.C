

#include<stdio.h>
main(){
/* Christian Paul Vertulfo*/
long n[1000],i,range,real,g,s,temp,count,factor;

clrscr();

printf("\tInput Range:   ");
scanf("%ld",&range);
s=0;
real=2;
for(i=0;i<range-1;i++)
{
	n[i]=real;
	real++;
}

printf("\tWasteful Numbers---: ");
for(i=0;i<range-1;i++)
{
	temp=n[i];
	g=0;
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
			 g++;
			}
	}
	temp=n[i];
	s=0;
		for(;temp!=0;)
			{
			 temp=temp/10;
			 s++;
			}


	if(g>s)
	{
	 temp=n[i];
	 g=0;
	 factor=2;
	 printf(" %ld ",n[i] );
		for(;temp!=1;)
		{
		 if(temp%factor!=0)
			{
			factor++;
			}
		else
			{

			temp=temp/factor;
			g++;
			}
		}



	}


}
getch();
}