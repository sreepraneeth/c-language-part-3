//Armstrong Number
#include<stdio.h>
#include<math.h>
int main()
{
	int n,r,arm=0,count=0;
	printf("Enter a number");
	scanf("%d",&n);
	int temp=n;
	int p=n;
    while(p>0)
	{	
	count=count+1;
	p=p/10;
	}
    temp=n;
    while(n>0)
    {
    arm=arm+pow(n%10,count);
    n=n/10;
	}
	if(temp==arm)
	printf("Armstrong");
	else
	printf("Not a armstrong number");
	return 0;
}
