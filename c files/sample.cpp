#include<stdio.h>
#include<stdlib.h>
int main()
{
	float arr[10];
	int n,i,min,j;
	float temp;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%f",&arr[i]);
	}
	for(i=0;i<n;i++)
	{
		printf("\n%f\n",arr[i]);
		
	}
	for(i=0;i<n-1;i++)
	{	
		min=i;
		for(j=i+1;j<n;j++)
		{
		
			if(arr[i]>arr[j])
			{
				min=j;
			}
		}
		if(min!=i)
		{
			temp=arr[i];
			arr[i]=arr[min];
			arr[min]=temp;
		}
		

	}
	for(i=0;i<n;i++)
	{
		printf("%f\n",arr[i]);
	}
	
return 0;
}
