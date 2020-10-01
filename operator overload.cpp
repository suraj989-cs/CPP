#include<iostream>
using namespace std;
class complex{
	public:
		float real,img;
		complex(){
			real=0;
			img=0;
			
		}
		complex(float r,float i)
		{
			real=r;
			img=i;
		}
		void show()
		{
			cout<<real<<"+i"<<img<<endl;
		}
    friend complex operator+(complex &a, complex &b);		
};
complex operator+(complex &a, complex &b)
{
	complex temp;
	temp.real=a.real+b.img;
	temp.img=a.real+b.img;
	return temp;
}
int main()
{
	complex c1(5,4);
	complex c2(3,4);
	complex sum;
	sum=c1+c2;
	cout<<"addition of complex number=";
	sum.show();
	return 0;
}
