#include <iostream>
using namespace std;
struct node
	{
	int data;
	struct node *next;
	};
struct node *front=NULL, *rear=NULL;

void enqueue(int item)
{
	struct node *newnode = (struct node *) new node;
	cout<<"element enqueue:"<<item<<endl;
	newnode->data=item;
	newnode->next=NULL;
	if(front==NULL && rear==NULL)
	front=rear=newnode;
	else
	{
	rear->next=newnode;
	rear=newnode;
	}
}

void dequeue(void)
{
	cout<<"element dequeue here"<<endl;
	struct node *temp=front;
	if(front==NULL)
	{
	cout<<"Queue Empty"; 
	return;
	}
	else 
	{
	front=front->next;
	delete(temp);
	}
}
void display(void)
{
	struct node *temp=front;
	cout<<"display element:";
	while(temp!=NULL)
	{
		cout<<"\t"<<temp->data;
		temp=temp->next;
	}
	cout<<"\n";
}
void peep(void)
{
	if(front==NULL)
	{
	cout<<"Queue Empty";
	return;
	}
	else 
	{
	 	cout<<"Element at the front = "<<front->data<<endl;;
		cout<<"Element at the end = "<<rear->data<<"\n";
	}
}

int main ()
{
	enqueue(10);
	enqueue(20);
	enqueue(30);
	enqueue(40);
	display();
	dequeue();
	display();
	peep();
	display();
}

