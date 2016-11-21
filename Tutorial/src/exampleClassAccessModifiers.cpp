#include <iostream>
#include "Parent.h"
using namespace std;

Parent::Parent(string nm = "Mama",int a = 21, double l = 1.60){
	name = nm;
	age = a;
	length = l;
};

void Parent::printObj(){
	cout<<" parent name is: "<<name<<endl;
	cout<<" age is: "<<age<<endl;
	cout<<" length  is: "<<length<<endl;
};

int main(){
	Parent p1;
	Parent p2 = Parent("Papa");
	Parent p3 = Parent("Opa" ,62);
	Parent p4 = Parent("Oma" ,61,1.40);
	p1.printObj();
	p2.printObj();
	p3.printObj();
	p4.printObj();
	return 0;
};
	
