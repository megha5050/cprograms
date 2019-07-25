#include<stdio.h>
int main()
{
int a,b,c;
printf("enter three numbers:");
scanf("%d%d%d",&a,&b,&c);
if(a>b && a>c)
{
printf("first numis larger");
}
else if (b>c && b>a)
{
printf("second num is larger");
}
else 
{
printf("third num is larger");
}
}
