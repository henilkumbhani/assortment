#include<stdio.h>
main()
{
	int r,c,a[100][100],b[100][100],addition[100][100],i,j;
	printf("Enter row size=");
	scanf("%d",&r);
	printf("Enter column size=");
	scanf("%d",&c);
	printf("\nenter the first matrix=");
	for(i=0;j<r;i++)
	{
		for(j=0;j<r;j++)
		{
			printf("a[%d][%d]=",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	printf("\nenter the second matrix=");
	for(i=0;i<c;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("b[%d][%d]=",i,j);
			scanf("%d",&b[i][j]);
		}
	}
    for(i=0;i<r;i++)
    {
		for(j=0;j<c;j++)
		{
			addition[i][j]=a[i][j]+b[i][j];
		}
	}
	printf("\naddition of two matrix=\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d",addition[i][j]);
		}
		printf("\n");
	}
	
}
