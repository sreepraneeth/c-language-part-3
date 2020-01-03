//Strong Number
#include<stdio.h>
int facted(int);
int main()
{
	int sum=0,facts=1,n,i=0,r,factorial;
	printf("Enter a number");
	scanf("%d",&n);
	while(n>0)
	{
	r=n%10;
	factorial=facted(r);
	sum+=factorial;
	n=n/10;
	}
	if(sum==n)
	printf("Strong number");
	else
	printf("Not a strong number")

	return 0;
}
	int facted(int x)
	{
	while(i<=x)
	{
	facts=facts*i;
	i+=1;
	}
	return facts;
	}

