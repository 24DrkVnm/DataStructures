#include<stdio.h>
int front=-1,rear=-1,maxSize,arr[100];
void enque(int elemx)
{
	printf("\n%d",elemx);
	if(rear==maxSize)
	{
		printf("\nOverflow");
	}
	else if(front==-1&&rear==-1)
	{
		front=0;
		rear=0;
		arr[rear]=elemx;
	}
	else 
	{
		++rear;
		arr[rear]=elemx;
	}
} 
void deque()
{
	if(front==-1)
	{
	printf("\nUnderflow");                                                                                                                                                   
	}
	else if(front>rear)
	{
	 front=-1;
	 rear=-1;
	}
	else 
	{
	front++;
	}
}
void display()
{
for(int i=front;i<=rear;i++)
	{
		printf("%d ",arr[i]);
	}
}
void main()
{
	int fn=0;
	int elemx;
	printf("%d",maxSize);
	printf("Enter the naximum size of the queue");
	scanf("%d",&maxSize);
	while(fn!=4)
	{
		printf("\nEnter the function you want to perform: 1.enqueue 2.Dequeue 3.Display 4.Stop");
		scanf("%d",&fn);
		switch(fn)
		{
			case 1:
			{	
				printf("\nEnter the number you want to add top the queue");
				scanf("%d",&elemx);
				enque(elemx);
				break;
			}
			case 2: 
			{
				deque();
				break;
			}
			case 3:
			{
				display();
				break;
			}
			case 4:
			{
				printf("\nCode executed Successfully");
				break;
			}
		}
		}
}
