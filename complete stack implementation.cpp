/*stack implementation*/
#include<iostream>
#define size 5
using namespace std;
int s[size], top=-1;

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

int peep(void)
{
	return s[top];
}

int isfull()
{
	if(top==size-1)return 1;
	else return 0;
}

int isempty()
{
	if(top==-1)return 1;
	else return 0;
}

int main()
{
	int choice ,element;
	while(choice!=6)
			{
				cout<<"\n 1:push";
				cout<<"\n 2:pop";
				cout<<"\n 3:peep";
				cout<<"\n 4:isfull";
				cout<<"\n 5:isempty";
				cout<<"\n 6:exit";
				cout<<"\n enter your choice:";
				cin>>choice;
				
				switch(choice)
				{
					case 1:
						cout<<"you had selected option to push \n";
						cout<<"enter the element to push \n";
						cin>>element;
						push(element);
						break;
					
					case 2:
						cout<<"you had selected option to pop \n";
						pop();
						break;
						
					case 3:
						cout<<"you had selected peep option \n";
						cout<<"the peep element is:"<< peep()<<endl;
					break;
					
					case 4:
						cout<<"you had selected option isfull \n";
							if(isfull()==1)cout<<"stacl isfull \n";
							else
							cout<<"stack is not full \n";
						break;
							 
					case 5:
						cout<<"you had selected isempty option \n";
							if(isempty()==1)cout<<"stack is empty \n";
							else
							cout<<"stack is not empty \n";
					break;
					
					default:
						cout<<"invalid choice. please re-enter your choice \n";
				}
								
			}
		return 0;
}
