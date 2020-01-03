  /* 1
      2  2
     3  3  3
    4  4  4  4
  5   5  5  5   5 */
  #include<stdio.h>
  #include<conio.h>
  int main()
  {
  	int i,j=5,k,x;
  	for(i=1;i<=5;i++)
  	{
  		for(k=1;k<=j;k++)
  		{
  			printf(" ");
		  }
		for(x=1;x<=i;x++)
		{
			printf("%d",i);
			printf(" ");
		}
		printf("\n");
		j=j-1;
	  }
  	getch();
  return 0;
}
