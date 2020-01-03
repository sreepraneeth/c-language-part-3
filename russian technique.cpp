//Russian Technique 
/* 11     12
	5	  24
	2 	  48 IF 2 IS EVEEN THEN ELIMINATE 2 WRT TO 48 
	1 	  96 */

#include<stdio.h>
int main()
{
	int n1,n2,sum=0;
	printf("Enter two numbers:");
	scanf("%d%d",&n1,&n2);
	while(n1>0)
	{
	if(n1%2!=0)
	{
		sum+=n2;
	}
	n1=n1/2;
	n2=n2*2;
}
printf("The product of the nos. is %d",sum);
return 0;
}
