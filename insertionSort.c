#include<stdio.h>
void main()
{
 	int i,j,n,temp,space=0,time=0;
 	space=6*4;
 	printf("Enter the no. of elements in the array \n");
	scanf("%d",&n);
	time+=2;
	space=n*4;
	int arr[n];
	printf("enter the elements of the array \n");
	time++;
	for(i=0;i<=n-1;i++)
	{
		scanf("%d",&arr[i]);
		time++;
		time++;
	}
	time+=1;
 	for(i=1;i<=n-1;i++)
 	{
 		temp=arr[i];
 		j=i-1;
 		while((j>=0) && (temp<arr[j]))
 		{
 			arr[j+1]=arr[j];
 			j--;
 		}
 		arr[j+1]=temp;
 		time++;
 	}
 	time+=1;
 	printf("Sorted array is:");
 	for(i=0;i<=n-1;i++)
	{
		printf(", %d",arr[i]);
		time++;
		time++;
	}
	time+=1;
	printf("\n Time complexity: %d \n Space Complexity: %d \n",time+1,space);
}	
	
 
