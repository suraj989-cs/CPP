#include<iostream>
#define size 5
int front=-1,rear=-1;
int queue[size];
using namespace std;
void enqueue (int element)
{
	if((rear+1)%size==front)
	{
		cout<<"overflow\n";
	}
	else if (front == -1 && rear ==-1)
	{
		cout<<"\nyour element "<<element<<" is added";
		front=rear=0;
		queue[rear]=element;
	}
	else
	{	cout<<"\nyour element "<<element<<" is added";
		rear=(rear+1)%size;
		queue[rear]=element;
	}
}

void dequeue(void)
{
	if(front ==-1 && rear==-1)
	{
		cout<<"underflow\n";
	}
	else if(front== rear)
	{
		cout<<"\nelement deleted = "<<queue[front];
		front=rear=-1;
	}
	else 
	{
		cout<<"\nelement deleted = "<<queue[front];
		front=(front+1)%size;
	}
}

void display(void)
{
	int i=front;
	if(front==-1 && rear ==-1)
	cout<<"queue is empty\n";
	
	else
	{
		cout<<"\ndisplay: ";
		while (i!= rear)
		{
			
			cout<<queue[i]<<"\t";
			i=(i+1)%size;
		} 
	}
}
void peek(void)
{
	if(front==-1 && rear==-1)
	cout<<"queue empty\n";
	else 
	cout<<"\ndata at front = "<<queue[front];
}

int main()
{
	enqueue(10);
	enqueue(20);
	enqueue(-5);
	display();
	peek();
	dequeue();
	peek();
	display();
	return 0;	
}








