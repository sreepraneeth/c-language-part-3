/*
1
2 3
4 5 6
7 8 9 10
11 12 13 14 15 */
#include<stdio.h>
int main()
{
	int r,c,no=1,len;
	printf("Enter no. of rows:");
	scanf("%d",&len);
	for(r=1;r<=len;r++)
	{
		printf("\n");
		for(c=1;c<=r;c++)
		{
			printf("%2d \t",no);
			no++;
		}
		}
		return 0;	
}
