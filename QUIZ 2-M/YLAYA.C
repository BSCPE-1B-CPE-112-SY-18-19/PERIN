#include<stdio.h>
main(){
long num[1000],i,ylaya,real,g,s,temp,count,factor;
clrscr();
printf("John Friderick Ylaya\n");
printf("Enter Number: ");
scanf("%ld",&ylaya);
s=0;
real=2;
for(i=0;i<ylaya-1;i++)
{
	num[i]=real;
	real++;
}

printf("Wasteful Numbers: ");
for(i=0;i<ylaya-1;i++)
{
	temp=num[i];
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
	temp=num[i];
	s=0;
		for(;temp!=0;)
			{
			 temp=temp/10;
			 s++;
			}


	if(g>s)
	{
	 temp=num[i];
	 g=0;
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
			g++;
			}
		}



	}


}
getch();
}