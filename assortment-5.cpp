#include<stdio.h>
main()
{
	int r,c,i,j,a[100][100],transpose[100][100];
	printf("Enter row size=");
	scanf("%d",&r);
	printf("Enter column size=");
	scanf("%d",&c);
	printf("\nenter the first matrix=");
	for(i=0;i<r;i++)
	{
		for(j=0;j<r;j++)
		{
			printf("a[%d][%d]=",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	printf("\nenter matrix=\n");
	for(i=0;i<c;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d",a[i][j]);
		}
		printf("\n");
    }
    for(i=0;i<r;i++)
    {
    	for(j=0;j<c;j++)
    	{
    		transpose[j][i]=a[i][j];
		}
	}
	printf("\ntranspose off the matrix=");
	for(i=0;i<c;i++)
	{
		for(j=0;j<r;j++)
		{
			printf("%d",transpose[i][j]);
		}
		printf("\n");
	}
}
