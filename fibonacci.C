#include<stdio.h>
int main()
{
int a=0,b=1,num,c=0;
printf("enter the number:");
scanf("%d",&num);
printf("%d\n",a);
printf("%d\n",b);
for(int i=0;i<(num-2);i++)
{
c=a+b;
printf("%d\n",c);
a=b;
b=c;
}

return 0;
}
