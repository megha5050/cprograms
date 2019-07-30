#include<stdio.h>
//#include<math.h>
int main()
{
int i,num,prime=0;
printf("enetr the number:");
scanf("%d",&num);
for(i=2;i<num;i++)
{
	if(num%i==0)
		{
			prime=1;
			break;
		}
}
if(prime==1)

	printf("the number is not prime");

else

	printf("number is prime");

}
