#include<stdio.h>
void main()
{
	int n,i,x,time=0,space;
	printf("Enter the no. of elements in the array \n");
	scanf("%d",&n);
	time+=2;
	space=n*4;
	printf("Please enter the number to be found \n");
	scanf("%d",&x);
	time+=2;
	space+=4;
	int arr[n];
	printf("enter the elements of the array \n");
	time++;
	for(i=0;i<=n;i++)
	{
		scanf("%d",&arr[i]);
		time++;
		time++;
	}
	int count=0;
	time++;
	space+=4;
	for(i=0;i<=n;i++)
	{
		if(arr[i]==x)
		{
			count++;
			printf("number found at %d position\n",i+1);
			time++;
			time++;
		}
		time++;
	
	}
	time++;
	if(count>0)
	{
		printf("Number found %d time\n",count);
		time++;
	}
	else
		{ 
		printf("Number not found\n");
		  time++;
		}
	printf("Time complexity: %d \n",time=1);
	printf("Space complexity: %d \n",space);
}

