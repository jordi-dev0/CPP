#include <iostream>
#include "Classes.h"

using namespace std;

// implement constructor
/*Box::Box(void){
	length = 1.0;
	width = 1.0;
	height= 42.0;
}*/
Box::Box(double a=1.0, double b = 2.0, double c = 3.0){
	length = a;
	width = b;
	height = c;
}

// implement member function
double Box::getVolume(){
	return length*width*height;
}

int main(){
	// create box object
	Box b;
	//print volume
	cout<<"width of the box is "<<b.width<<endl;
	cout<<"length of the box is "<<b.length<<endl;
	cout<<"heigth of the box is "<<b.height<<endl;
	cout<<"volume of box is "<<b.getVolume()<<endl;
	return 0;
}
