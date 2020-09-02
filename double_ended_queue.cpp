#include <iostream>
#define size 5
int dequeue[size];
int front =-1, rear =-1;
using namespace std;

void enqueuefront(int element)
{
	if((front==0 && rear==size-1) || (front==rear+1))
	cout<<"\nqueue is full";
	else if(front==-1 && rear==-1) 
	{
		front=rear=0;
		dequeue[front]=element;
		cout<<"\nelement enqueued from front ="<<element;
	}
	else if(front==0)
	{
		front=size-1; 
		dequeue[front]=element;
		cout<<"\nelement enqueued from front ="<<element;
	}
	else
	{
		front--;
		dequeue[front]=element;
		cout<<"\nelement enqueued from front ="<<element;
	}
}

void enqueuerear(int element)
{
	if((front==0 && rear==size-1) || (front==rear+1))
	{
		cout<<"\nqueue is full";
	}
	else if(front==-1 && rear==-1) 
	{
		front=rear=0;
		dequeue[rear]=element;
		cout<<"\nelement enqueue from rear = "<<element;
	}
	else if(rear==size-1)
	{
		rear=0;
		dequeue[rear]=element;
		cout<<"\nelement enqueue from rear = "<<element;
	}
	else
	{
		rear++;
		dequeue[rear]=element;
		cout<<"\nelement enqueue from rear = "<<element;
	}
	
}

void dequeuefront(void)
{
	if(front==-1 && rear==-1)
	{
		cout<<"\nqueue is empty";
	}
	else if(front==rear)
	{
		cout<<"\nelement deleted from front ="<<dequeue[front];
		front=rear=-1;
	}
	else if(front==size-1)
	{
		cout<<"\nelement deleted from front ="<<dequeue[front];
		front=0;
	}
	else 
	{
		cout<<"\nelement deleted from front ="<<dequeue[front];
		front++;
	} 
}

void dequeuerear(void)
{
	if(front==-1 && rear==-1)
	{
		cout<<"\nqueue is full\n";
	}
	else if(front==rear)
	{
		cout<<"\nelement deleted from rear ="<<dequeue[rear];
		front=rear=-1;
	}
	else if(rear==0)
	{
		cout<<"\nelement deleted from rear ="<<dequeue[rear];
		rear=size-1;
	}
	else 
	{
		cout<<"\nelement deleted from rear ="<<dequeue[rear];
		rear--;
	}
}

void display(void)
{
	int i=front;
	cout<<"\ndisplaying all elements -> \t";
	while( i != rear)
	{
		cout<<"\nelement displayed from front "<<dequeue[i];
		i=(i+1)%size;
	}
	cout<<"\nelement displayed from rear "<<dequeue[rear];
}

void getfront(void)
{
	cout<<"\nfront element ="<<dequeue[front];
}

void getrear(void)
{
	cout<<"\nrear element ="<<dequeue[rear];
}

int main()
{
	enqueuefront(11);
	cout<<endl;
	enqueuerear(22);
	enqueuerear(33);
	cout<<endl;
	display();
	cout<<endl;
	dequeuefront();
	cout<<endl;
	enqueuefront(44);
	enqueuefront(55);
	cout<<endl;
	getfront();
	cout<<endl;
	display();
	cout<<endl;
	dequeuefront();
	cout<<endl;
	dequeuerear();
	cout<<endl;
	enqueuefront(66);
	cout<<endl;
	dequeuerear();
	cout<<endl;
	display();
	cout<<endl;
	getrear();
	cout<<endl;
	dequeuerear();
	cout<<endl;
	dequeuefront();
	cout<<endl;
	display();
	return 0;
}


