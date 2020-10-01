#include<iostream>
using namespace std;
class mod{
	int number;
	float cost;
	public:
		void getdata (int a, float b);
		void putdata (void)
		{
			cout<<"number:"<<number<<endl;
			cout<<"cost:"<<cost<<endl;
		}
		
};
void mod :: getdata (int a ,float b)
{
	number=a;
	cost=b;
}
main()
{
	mod x,y;
	x.getdata(100,202.3);
	x.putdata();
	cout<<"\n";
	
	y.getdata(200,203.3);
	y.putdata();
}
