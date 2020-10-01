#include <iostream>
char stack[20];
int top = -1;
using namespace std;

void push(char x)
{
	stack[++top] = x;
}

char pop()
{
	if(top == -1) return -1;
	else return stack[top--];
}

int priority(char x)
{
	if(x == '(') return 1;
	if(x == '+' || x == '-') return 2;
	if(x == '*' || x == '/') return 3;
}

int main()
{
	char exp[20],x;
	int i=0;
	cout<<"enter the expression :\n";
	cin>>exp;
	
	while(exp[i]!='\0')
	{
		if(isalnum(exp[i]))
			cout<<exp[i];
		else if(exp[i] == '(')
			push(exp[i]);
		else if(exp[i] == ')')
		
		{
			while((x = pop()) != '(')
				cout<<x;
		}
		
		else 
		{
			while(priority(stack[top]) >= priority(exp[i]))
				cout<<pop();
			push(exp[i]);
		}
		i++;		
	}
	
	while(top != -1){cout<<pop();}
	
	return 0;
}
