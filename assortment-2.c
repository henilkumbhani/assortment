#include<stdio.h>

main()
{
	int i,n,first,second,a[100];
	printf("Enter value of array=");
	scanf("%d",&n);
	
	for (i=0;i<n;i++)
	{
		printf("a[%d]",i);
		scanf("%d",&a[i]);
	}
	if (a[0]>a[1])
	{
		first=a[0];		
		second=a[1];
	}
	else
	{
		first=a[1];
		second=a[0];
	}
	printf("Second largest number in array=");
	for (i=2;i<n;i++)
	{
		if (first<a[i])
		{
			second=first;
			first=a[i];
		}
	}
}
