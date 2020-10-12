#include <iostream>
using namespace std;
struct node
{
	int data;
	struct node *right, *left;	
};
struct node *createBinTree(void)
{
	int d;
	struct node *newnode = (struct node*) new node;
	cout<<"Enter data : (-1 to exit) : ";
	cin>>d;
	if(d==-1)return NULL;
	newnode->data=d;
	newnode->right=NULL;
	newnode->left=NULL;
	cout<<"\nEnter left node of "<<d<<endl;
	newnode->left = createBinTree();
	cout<<"\nEnter right node of "<<d<<endl;
	newnode->right = createBinTree();
	return newnode;	
}
void preOrderTraversal (struct node *ptr)
{
	if(ptr==NULL)return;
	cout<<"\t"<<ptr->data;
	preOrderTraversal(ptr->left);
	preOrderTraversal(ptr->right);
}
void postOrderTraversal (struct node *ptr)
{
	if(ptr==NULL)return;
	postOrderTraversal(ptr->left);
	postOrderTraversal(ptr->right);
	cout<<"\t"<<ptr->data;
}
void inOrderTraversal (struct node *ptr)
{
	if(ptr==NULL)return;
	inOrderTraversal(ptr->left);
	cout<<"\t"<<ptr->data;
	inOrderTraversal(ptr->right);
}

int main()
{
	struct node *createBinTree(void);
	void preOrderTraversal (struct node *ptr);
	void postOrderTraversal (struct node *ptr);
	void inOrderTraversal (struct node *ptr);
	struct node *root=NULL;
	root=createBinTree();
	cout<<"\nPre Order Tranversal : ";preOrderTraversal(root);
	cout<<"\nPost Order Tranversal : ";postOrderTraversal(root);
	cout<<"\nIn Order Tranversal : ";inOrderTraversal(root);
}

