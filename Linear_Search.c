#include<stdio.h>
int main()
{
	//int arr[]={23,45,34,21,56};
	int n,element,i,found=0;
	printf("enter size of an array\n");
	scanf("%d",&n);
	int arr[n];
	printf("enter the array's elements\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("array's elements are\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",arr[i]);
	}
	printf("\n");
	printf("enter which element you will find\n");
	scanf("%d",&element);
	for(i=0;i<n;i++)
	{
		if(arr[i]==element)
		{
			printf("element found at location %d\n",i);
			found=1;
			break;
		}
	}
	if(!found)
	{
		printf("element not found\n");
	}
	return 0;
	
}
