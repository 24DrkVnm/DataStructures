#include<stdio.h>
void main()
{
	int left=0,n,x,flag=0,time=0,space=0,i,mid;
	time+=4;
	space=6*4;
	printf("Enter the no. of elements in the array \n");
	scanf("%d",&n);
	time+=2;
	space+=4;
	printf("Please enter the number to be found \n");
	scanf("%d",&x);
	time+=2;
	space+=4;
	int arr[n],right=(n-1);
	printf("enter the elements of the array \n");
	time++;
	space=space+(n*4);
	for(i=0;i<=(n-1);i++)
	{
		scanf("%d",&arr[i]);
		time++;
	}
	time+=1;
	while(left<=right)
	{
		mid=(left+right)/2;

		if(x==arr[mid])
		{
			flag=1;
			printf("Element is found at %d \n",mid+1);
			time+=2;
			break;
		}
		else if(x>arr[mid])
		{
			left=(mid+1);
			time++;
			continue;
		}
		else if(x<arr[mid])
		{
			right=(mid-1);
			time++;
			continue;
		}
		
	}
	time+=1;
	if(flag==0)
	{
		printf("element not found\n");
		time+=2;
	}
	else
	{
		printf("Code executed succefully\n");
		time+=2;
	}	
	printf("Time complexity:%d \n Space Complexity:%d \n",time+1,space+1);
	
	
}
