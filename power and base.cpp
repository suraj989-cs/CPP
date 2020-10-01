#include<iostream>
using namespace std;

int pow(int b, int e)
{
	if(e<=0)
	return 1;
	else return (b*pow(b,e-1));
}

int main()
{
	int b,e;
	cout<<"enter the base "<<endl;
	cin>>b;
	cout<<"enter the power "<<endl;
	cin>>e;
	cout<<"base is "<<b<<" power is "<<e<<" and ans is "<<pow(b,e);
	return 0;
	
}
