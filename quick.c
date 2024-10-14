#include<stdio.h>
int n;
int arr[100];
int temp;

int pivot;
int i;
int j;		
void quicksort(int first,int end);
void main()
{
	/*int temp;
	int pivot;
	int i;
	int j;*/
	printf("Enter the total number of elements");
	scanf("%d",&n);
	printf("Enter elements to be sorted");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	quicksort(0,n-1);
}
void quicksort(int first,int end)
{	
	pivot=first;
	i=first;
	j=end;
	while(i<j)
	{
	
		if(arr[i]<pivot && arr[j]>pivot)
		{
			i++;
			j--;
		}
		else if(arr[i]<pivot && arr[j]<pivot)
		{
			j--;
		}
		else if(arr[i]>pivot && arr[j]>pivot)
		{
			i++;
		}
		else if(arr[i]>pivot && arr[j]<pivot)
		{
			temp=arr[i];
			arr[i]=arr[j];
			arr[j]=temp;
		}	
	}
	temp=arr[i];
	arr[i]=pivot;
	arr[pivot]=j;
	quicksort(pivot,i-1);
	quicksort(i+1,n);
	
}



