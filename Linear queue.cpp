#include<stdio.h>
#define SIZE 5
int linear_queue[SIZE];
int rear = -1, front = -1;
 void enqueue(int);
 void dequeue();
 void front_element();
 void display();
 int is_empty();
 int is_full();
int main()
{
	int choice,data;
	while(1)
	{
	printf("\n enter \n 1 for enqueue \n 2 for dequeue \n 3 for front \n 4 for display \n 5 for exit");
	scanf("%d",&choice);
	switch (choice)
	{
		case 1:
			printf("\nenter data");
			scanf("%d", &data);
			enqueue(data);
			break;
		case 2:
			dequeue();
			break;
		case 3:
			front_element();
			break;
		case 4:
			display();
			break;
		case 5:
			is_empty();
			break;
		case 6:
			is_full();
			break;
	}
}
	return 0;
}
void enqueue(int data)
{
	if (rear==SIZE-1)
	{
		printf("\n Queue is already full");
		return;
	}
	else if(rear==-1 && front==-1)
	{
		rear=rear+1;
		front=front+1;
	}
	else
	{
		rear=rear+1;
	}
	linear_queue[rear]=data;
	
}
void dequeue()
{
	if(rear==-1 && front==-1)
	{
		printf("\n Queue is already empty");
	}
	else if (rear==front)
	{
		rear==-1;
		front==-1;
	}
	else
	{
		printf("\n %d is dequeued successfully",linear_queue[front]);
		front=front+1;
	}
}
void front_element()
{
	if(rear==-1 && front==-1)
	{
		printf("\n Queue is already empty");
	}
	else
	{
		printf("\n %d is front successfully",linear_queue[front]);
	}
}
void display()
{
	int i;
	if(rear==-1 && front==-1)
	{
		printf("\n Queue is empty");
	}
	else
	{
		for(i=front;i<=1;i++)
		{
			printf("%d",linear_queue[i]);
		}
	}
}
int is_empty()
{
	if(front==-1 && rear==-1)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int is_full()
{
	if(rear=SIZE-1)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

