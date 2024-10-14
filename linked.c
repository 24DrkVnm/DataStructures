#include<stdio.h>
#include<stdlib.h>
struct node
{
int data;
struct node*link;
}*ptr,*head=NULL;
void insertrandom()
{	
	struct node*temp=(struct node*)malloc(sizeof(struct node));
	int item;
	if(head==NULL)
	{
		printf("Enter the data to be entered");
		scanf("%d",&item);
		temp->data=item;
		temp->link=NULL;
		head=temp;
		printf("%p",&temp->link);
	}
	else
	{
		ptr=head;
		while(ptr->link!=NULL)
		{
			ptr=ptr->link;
		}
		printf("Enter the random data to be entered");
		scanf("%d",&item);
		temp->data=item;
		temp->link=NULL;
		ptr->link=temp;
		printf("%p",&temp->link);
	}
}
void InsertBeg()
{
	struct node*temp=(struct node*)malloc(sizeof(struct node));
	int item;
	printf("Enter the data to be entered");
	scanf("%d",&item);
	if(head==NULL)
	{
		temp->data=item;
		temp->link=NULL;
		head=temp;
	}
	else
	{
		temp->link=head;
		temp->data=item;
		head=temp;
	}
}
void InstRan()
{
	struct node*temp=(struct node*)malloc(sizeof(struct node));
	int item,key;
	printf("Enter the data to be entered");
	scanf("%d",&item);
	printf("Enter the key data to be verified");
	scanf("%d",&key);
	if(head==NULL)
	{
		temp->data=item;
		temp->link=NULL;
		head=temp;
	}
	else
	{
		ptr=head;
		while(ptr->link!=NULL || ptr->data!=key)
		{
			if(ptr->link==NULL)
			{
				printf("Key data not found in linked list");
			}
			else
			{
			ptr=ptr->link;
			}
		}
		if(ptr->link==NULL && ptr->data==key)
		{
			ptr->link=temp;
			temp->link=NULL;
			temp->data=item;
		}
		else
		{
			struct node * ptr1=ptr->link;
			ptr->link=temp;
			temp->link=ptr1;
			temp->data=item;
		}
	}
	
}
void delete()
{
	int del;
	struct node*ptr1;
	printf("Enter the data to be deleted");
	scanf("%d",&del);
	while (ptr->data!=del && ptr->link!=NULL)
	{
		ptr1=ptr;
		ptr=ptr->link;
	}
	if(ptr->data == del)
	{
		ptr1->link=ptr->link;
		free(ptr);
	}
	
	
}
void Display()
{
	ptr=head;
	int count=1;
	while(ptr->link!=NULL)
	{
		printf("%d\n",ptr->data);
		ptr=ptr->link;
		count++;
	}
	printf("%d node in the linked list",count);
}
void main ()
{	
	int n=10;
	while(n!=6)
	{
	printf("Choose your operation 1.Insert at end 2.Insert at begining 3.Insertion At Random 4.Delete 5.Display 6.Exit");
	scanf("%d",&n);
	if (n==1)
	{
	insertrandom();
	}
	else if(n==2)
	{
	InsertBeg();
	}
	else if(n==3)
	{
	InstRan();
	}
	else if(n==4)
	{
	delete();
	}
	else if(n==5)
	{
	Display();
	}
	else if(n==6)
	{
	printf("Code bulit");
	break;
	}
	else if(n>6)
	{
	printf("Invalid");
	}
	}
	printf("Code Exited Successfully");
}

