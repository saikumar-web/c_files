#include<stdio.h>
#include<stdlib.h>
int main()
{
	float arr[100];
	int size,temp,i,j,min_idx;
	printf("enter the size of an array\n");
	scanf("%d",&size);
	for(i=0;i<size;i++)
	{
		scanf("%f",&arr[i]);
	}
	
	for(i=0;i<size;i++)
	{
		printf("%f\n",arr[i]);
	}
 
  
    // One by one move boundary of unsorted subarray 
    for (i = 0; i <size-1; i++) 
    { 
        // Find the minimum element in unsorted array 
        min_idx = i; 
        for (j = i+1; j < size; j++) 
          if (arr[j] < arr[min_idx]) 
            min_idx = j; 
  		if(min_idx!=i)
  		{
		
        // Swap the found minimum element with the first element 
        	temp=arr[min_idx];
        	arr[min_idx]=arr[i];
        	arr[i]=temp;
        }
    } 
		
	for(i=0;i<size;i++)
	{
		printf("%f\n",arr[i]);
	}
	return 0;
}
