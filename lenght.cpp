#include<iostream>
using namespace std;
int main()
{
	char str[20]="megha",*pt;
	int i=0;
	pt=str;
	while(*pt!='\0')
	{
		i++;
		pt++;
	}
	cout<<"\nlength of string :"<<i;
	return 0;
}

