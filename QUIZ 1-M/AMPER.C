#include<stdio.h>
main()
{
  int size,temp,temp1,i,rem,rev,flag,j;
  int bin = 0,base = 1;
  int b[100];
  clrscr();

   printf("enter size: ");
   scanf("%d",&size);

   printf("\n Binary list: \n");
   for(i=2; i<=size; i++ )
   {
      temp = i;
      for(j=2; j<temp%2; j++)
      {
       if(temp/2==0)
       {
       flag=1;
       break;
       }
      }
      if( flag == 1 )
      {
      while( temp > 0 )
      {
	rem = temp % 2;
	bin = bin + rem * base;
	temp = temp / 2;
	base = base * 10;
      }
      b[i] = bin;

      printf("%d = %d\n",i,bin);
      bin = 0;
      base = 1;
      }
   }

   printf("\n Check: \n");
   for(i=0; i<size; i++)
   {
     printf("%d \n",b[i]);
   }

   temp=0;
   printf("\n\nOutput: ");
   for(i=2; i<=size-2; i++)
   {
      temp = b[i];
      temp1 = b[i];
      while(temp > 0 )
      {
       rem = temp % 10;
       rev = rev * 10 + rem;
       temp = temp / 10;
      }

      if( rev == temp1)
      {
       printf("%d \n",temp1);
      }
      rem = 0;
      rev = 0;
   }

getch();
}