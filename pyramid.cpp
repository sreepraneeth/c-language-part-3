     /* 1
      2  2
     3  3  3
    4  4  4  4
  5   5  5  5   5 */
  #include<stdio.h>
  int main()
  {
  	int i,j,n;
  	printf("Enter a number");
  	scanf("%d",&n);
  for(i=1;i<=n;i++)
  {
  	printf("\n");
	  	for(j=1;j<=2*n-1;j++)
	  	{
	  		if(j>=n-(i-1)&&j<=n+(i-1))
	  		{
	  			printf("%d",i);
			  }
			else
			printf(" ");
		  }
	  }
  	return 0;
  }
