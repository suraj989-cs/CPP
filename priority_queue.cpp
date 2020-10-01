#include <iostream>
#define size 5
char PQelement[size*2];
int PQpriority[size*2];
int totalelement = 0;
using namespace std;

void PQinsert(char newelement, int newpriority)
{
	int count = 0, k;
	while (count < totalelement)
	{
		if(newpriority>=PQpriority[count])count++;
		else break;
	}
	if(count != totalelement)
		
		for(k=totalelement; k>count; --k)
		{
			PQelement[k]=PQelement[k-1];
			PQpriority[k]=PQpriority[k-1];
		}
	PQelement[count]=newelement;
	PQpriority[count]= newpriority;
	totalelement++;
}

void PQdelete(char deleteelement, int deletepriority)
{
	int count =0, i;
	while (count < totalelement)
	{
		if(PQelement[count]==deleteelement && PQpriority[count]==deletepriority)
		break;
		else count ++;	
	}
	if(count==totalelement)
	cout<<"\nthe element to delete did not find in the list";
	else
	{
		for(i=count; i<totalelement; ++i)
		{
			PQelement[i]=PQelement[i+1];
			PQpriority[i]=PQpriority[i+1];
		}
		totalelement--;
		cout<<"\ndeleted element "<<deleteelement;
	}
}

void display(void)
{
	int i;
	for(i=0; i<totalelement; ++i)
	{
		cout<<"\nelement: "<<PQelement[i]<<" priority: "<<PQpriority[i];
	}
}

int main()
{
	PQinsert('A',2);
	PQinsert('B',4);
	PQinsert('C',1);
	PQinsert('D',5);
    PQinsert('E',3);
	PQinsert('F',3);
	cout<<endl;
	display();
	cout<<endl;
	PQdelete('C',1);
	cout<<endl;
	display();
	return 0;
}
