#include<stdio.h>
main(){
long x[1000],i,longos,real,g,s,temp,count,factor;
clrscr();


printf("Enter Number: ");
scanf("%ld",&longos);
s=0;
real=2;
for(i=0;i<longos-1;i++)
{
	x[i]=real;
	real++;
}

printf("Wasteful digits: ");
for(i=0;i<longos-1;i++)
{
	temp=x[i];
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
	temp=x[i];
	s=0;
		for(;temp!=0;)
			{
			 temp=temp/10;
			 s++;
			}


	if(g>s)
	{
	 temp=x[i];
	 g=0;
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
			g++;
			}
		}



	}


}
getch();
}