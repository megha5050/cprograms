#include<stdio.h>
int main()
{
int i,n,num,sum=0;
float avg;
//system ("clear");
printf("enter the limit");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
printf("enter the numbers");
scanf("%d",&num);
sum=sum+num;
}
avg=(float)sum/n;
printf("average of %d is %f",n,avg);
}
