#include<iostream>
using namespace std;
#define size 5
int queue[size];
int front=-1, rear=-1;

void enqueue(int element)
{
	if(rear==size-1)
	{cout<<"overflow\n";}
	else if
	(front==-1 && rear==-1)
	{
		front=rear=0;
		queue[rear]=element;
	}
	else 
	{rear++;queue[rear]=element;}
}

void dequeue(void)
{
	if(front==-1 && rear==-1)
	
	{
	{cout<<"element deleted= "<<queue[front]<<endl;}
	front=rear=-1;
	}
	else 
	{
		cout<<"element deleted="<<queue[front]<<endl;
		front++;
	} 
}

void display(void)
{
	int i;
	if(front==-1 && rear==-1)
	{
		cout<<"queue empty\n";
	}
		else 
		{
			for(i=front; i<=rear ;++i)
			cout<<"display queue elements ="<<queue[i]<<endl;
			
		}
		
	
}

void peek(void)
{
	if(front==-1 && rear==-1)
	cout<<"queue empty \n";
	else 
	{
		cout<<"data at front= "<<queue[front]<<endl;
	}
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
