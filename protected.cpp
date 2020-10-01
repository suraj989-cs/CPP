#include<iostream>
using namespace std;
class area{
	protected:
		double area = 0;
		void getdata();
};

class rect :  public area{
	public :
		int l=30;
		double getdata()
		{
			area=l*l;
			return area;
		}
		
};
int main()
{
	area a;
	rect r;
	cout<<"area of rectangle is "<<r.getdata()<<endl;
	return 0;
}
