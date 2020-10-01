#include<iostream>
using namespace std;

struct node
{
	int data;
	struct node *next;
};

int main ()
{
	struct node *start=NULL, *newnode, *temp;	
	int choice;
	
	do{
		newnode = (struct node*) new node;
		cout<<"Enter data : ";
		cin>>newnode->data;
		newnode->next=NULL;
		if(start==NULL) 
		{
			start = temp = newnode;
		}
		else
		{
			temp->next = newnode;
			temp=newnode;
		}		
		cout<<"Do you wish to continue? (1 For Yes / 0 For No) : ";
		cin>>choice;
	 }while(choice != 0);
	
	temp = start;
	while (temp != NULL)
	{
		cout<<temp->data<<"\t";
		temp=temp->next;
	}
}
