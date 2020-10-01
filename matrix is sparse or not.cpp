#include <iostream>
#define row 5
#define col 4
using namespace std;

int issparse(int a[row][col])
{
	int i,j,count=0;
	for(i=0;i<row;++i)
	{
		for(j=0;j<col;++j)
		 
		if(a[i][j]==0)count++;
	}
	
		if(count>=(row*col/2))return count;
		else return -1;	
}


/*sparse matrix*/
int main()
{
	int s[row][col]={0,5,0,0,0,5,3,2,3,4,0,6,0,0,0,0,8,9,0,0},status;
	status=issparse(s);
	if(status==-1)cout<<"not a sparse matrix";
	else cout<<"sparse matrix : with "<<status<<" zero elements from total "<<row*col<<" elements";
	return 0;

}


