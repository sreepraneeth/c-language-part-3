/*Print the series 3+33+333+3333+33333+33333 */
#include<stdio.h>
int main()
{
	int n,a=0,i;
	printf("Enter the term:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		a=(a*10)+3;
		printf("%d",a);
		if(i<n)
		printf("+");
	}
	return 0;
}
