
#include<stdio.h>
int main()
{
  int i,num,j,prime=0;
  printf("enter the number:");
  scanf("%d",&num);
for(i=1;i<num;i++)
{
prime=0;
  for(j=2;j<=i/2;j++)
  {

    if(i%j==0)
    {

      prime=1;
      break;
    }
   }
   if(prime==1)
   {

     printf(" ");
   }
   else
   {

     printf("%d",i);
   }

}
return 0;
}
