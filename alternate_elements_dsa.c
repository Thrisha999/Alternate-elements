#include<stdio.h>
void main()
{
	int i,n,a[20];
	printf("enter the size of an array:\n");
	scanf("%d",&n);
	printf("enter the array elements:\n");
	for(i=0;i<n;i++)
	{
		printf("enter a[%d] element:",i);
		scanf("%d",&a[i]);
	}
	printf("the alternate elements in an array are:\n");
	for(i=0;i<n;i++)
	{
		if(i%2==0)
		{
			printf("%d ",a[i]);
		}
	}
}
