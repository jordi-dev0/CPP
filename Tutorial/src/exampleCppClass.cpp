#include <iostream>

using namespace std;

class Box{
	public:
		double length;
		double width;
		double height;
		Box();
		Box(double);
		void print(void);

};



int main(){
	Box b1;
	b1.print();
	return 0;
}

void Box::print(void){
	cout<<"length = "<<length<<endl;
	cout<<"width = "<<width<<endl;
	cout<<"height = "<<height<<endl;
}

Box::Box(void){
			length = 1.0;
			width = 1.0;
			height = 1.0;
};
Box::Box(double n){
			length = n;
			width = 1.0;
			height = 1.0;
};
