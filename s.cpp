//Strong Number [145=1!+4!+5!=
#include<stdio.h> 
int main()
{
	int n1,n,rem,sum=0,i,f;
	scanf("%d",&n);
	n1=n;
	while(n>0)
	{
		rem=n%10;
		f=1;
		for(i=1;i<=rem;i++)
		{
			f=f*i;
		}
		sum+=f;
		n=n/10;
		}
	if(sum==n1)
	{
		printf("Strong number");
	}
	else
	{
	printf("Not a strong number");
	}
	return 0;
}

