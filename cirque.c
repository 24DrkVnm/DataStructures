#include<stdio.h>
int front=-1,rear=-1,maxSize,arr[100],count;
void enque(int elemx)
{
	if(front==((rear+1)%maxSize))
	{
		printf("\nOverflow");
	}
	else if(front==-1&&rear==-1)
	{
		front=0;
		rear=0;
		arr[rear]=elemx;
		count++;
	}
	else 
	{
		rear=(rear+1)%maxSize;
		arr[rear]=elemx;
		count++;
	}
} 
void deque()
{
	if(front==-1 && rear==-1)
	{
	printf("\nUnderflow");                                                                                                                                                   
	}
	else if(front==rear)
	{
	printf("%d",arr[front]);
	front++;
	rear++;
	count--;
	}
	else 
	{
	printf("%d",arr[front]);
	front++;
	count--;
	}
}
void display()
{
int i=front;
for(int j=0;j<count;j++)
	{
		printf("%d ",arr[i]);
		i=((i+1)%maxSize);
	}
}
void main()
{
	int fn=0;
	int elemx;
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
