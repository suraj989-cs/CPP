#include <iostream>
using namespace std;
struct node
	{
	int data;
	struct node *next;
	};
struct node *start=NULL, *newnode, *temp;

void insertBegin(void)
{
	newnode->next=start;
	start=newnode;
}

void insertEnd(void)
{
	temp = start;
	while (temp->next != NULL)
		{
		temp=temp->next;
		}
	temp->next = newnode;
}

void insertPos(int p)
{
	int count=1;
	temp=start;
	while (count < p)
		{
		temp=temp->next;
		count++;
		}
	newnode->next = temp->next;
	temp->next = newnode;
}

void display(void)
{
	temp=start;
	while(temp!=NULL)
	{
		cout<<"\t"<<temp->data;
		temp=temp->next;
	}
}
int main ()
{
int choice, pos;
do
	{
	cout<<"\n1: Insert in beginning\n";
	cout<<"2: Insert at end\n";
	cout<<"3: Insert after a position\n";
	cout<<"4: Display\n";
	cout<<"5: Exit\n";
	cout<<"Enter your choice : ";
	cin>>choice;
	if(choice==1 || choice==2 || choice==3)
	{
		newnode = (struct node*) new node;
		cout<<"Enter data : ";
		cin>>newnode->data;
		newnode->next=NULL;
	}
	switch(choice)
		{
		case 1:
			insertBegin();
			break;
		case 2:
			insertEnd();
			break;
		case 3:
			cout<<"Enter position: ";
			cin>>pos;
			insertPos(pos);
			break;
		case 4:
			display();
			break;
		case 5:
			break;
		default:
			cout<<"Invalid Choice...Please try again...\n";
		}
	}while(choice != 5);
}


