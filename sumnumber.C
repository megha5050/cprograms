#include<stdio.h>
int main()
{
int num,f,sum=0;
printf("enter the number:");
scanf("%d",&num);
while(num>0)
{
f=num%10;
sum=sum+f;
num=num/10;
}
printf("sum of the given number is:%d\n",sum);
}
      
