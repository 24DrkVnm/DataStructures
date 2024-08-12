#include<stdio.h>
void main()
{
	int i=0,n,j,small,temp,time=0,space;
	time+=3;
	space=2*4;
	printf("Enter the number of elements in array \n");
	scanf("%d",&n);
	time+=2;
	space+=4;
	int arr[n];
	printf("Enter the elements of the array \n");
	time++;
	for (i=0;i<=n-1;i++)
	{
		scanf("%d",&arr[i]);
		space=+4;
		time++;
	}
	time+=1;
	for(i=0;i<=n-1;i++)
	{
		small=i;
		for(j=i+1;j<=n-1;j++)
		{
			if(arr[small]>arr[j])
			{
				small=j;
			}
			time+=2;
		}
		time+=1;
		if(i!=small)
		{
			temp=arr[i];
			arr[i]=arr[small];
			arr[small]=temp;
			time+=3;
		}
		time+=2;
	}
	time+=1;
	printf("Sorted elements are: \n");
	time++;
	for (i=0;i<=n-1;i++)
	{
		printf("%d ",arr[i]);
		time++;
	}
	time+=1;
	printf("\nTime complexity: %d \n Space Complexity: %d \n",time+1,space);
	
}
