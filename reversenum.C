
#include<stdio.h>
int main()
{
int num,f,rev=0;
printf("enter the number:");
scanf("%d",&num);
while(num>0)
{
f=num%10;
rev=(rev*10)+f;
num=num/10;
}
printf("%d",rev);
return 0;
}
