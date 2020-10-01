#include<iostream>
#define size 5
using namespace std;
int s[size],top=-1;

void push(int x)
{
	if(top==size-1)
			{cout<<"stack overflow"<<endl;return;}
	else
			{top++;
			 s[top]=x;
			 cout<<"element pushed : "<< s[top]<<endl;;
			}		
			
}

void pop(void)
{
	if(top==-1)
	{
		cout<<"stack underflow"<<endl; return;}
	else
		{cout<<"element popped :"<< s[top]<<endl;top--;}
				
}


int main()
{
	push(50);
	push(7);
	push(20);
	pop();
	push(14);
	pop();
	pop();
	cout<<"stack top ="<< top<<endl;;
	return 0;
}
