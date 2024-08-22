#include<stdio.h>
struct poly
	{
	 int coeff;
	 int exp;
	};
void main()
{	
	int n,i;
	printf("Enter the number of terms in polynomial");
	scanf("%d",&n);
	struct poly arr[n];
	for(i=0;i<n;i++)
	{	
		printf("Enter the coffecient of %d th term/n",i+1);
		scanf("%d",&arr[i].coeff);
		printf("Enter the exponent of %d th term/n",i+1);
		scanf("%d",&arr[i].exp);
	}
	for(i=0;i<n;i++)
	{
		printf("%dx^%d",arr[i].coeff,arr[i].exp);
		if(i<n-1)
		{
		printf("+");
		}
	}
}
