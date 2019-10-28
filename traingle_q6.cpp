#include <iostream>
#include <math.h>
using namespace std;
class triangle{
	public:
	int a;
	int b;
	int c;
	
	void getData(){
		int a,b,c;
		cout<<"enter a b c ";
		cin>>a>>b>>c;
		this->a=a;
		this->b=b;
		this->c=c;
	};

	float findArea(){
		float s=(a+b+c)/2.0;
		float area=sqrt(s*(s-a)*(s-b)*(s-c)*1.0);
		return area;
	};
	
	int findPerimeter(){
		return a+b+c;
	};
};
int main(){
	triangle tr;
	tr.getData();
	int ans=tr.findPerimeter();
	int ans2=tr.findArea();
	cout<<"Area of given triangle: "<<ans2<<"\n";
	cout<<"Perimeter of given triangle: "<<ans<<"\n";
	return 0;
	
}
