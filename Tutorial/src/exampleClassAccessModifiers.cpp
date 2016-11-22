#include <iostream>
#include "Parent.h"
using namespace std;
/* 
This is one way to define initial values for members in a constructor 
a different way is


Parent::Parent(string nm = "Mama",int a = 21, double l = 1.60){
	name = nm;
	age = a;
	length = l;
};
*/

/*using this format is preferered since it make no difference for POD
Plain Old Data (most simple types)
however for user defined types it can avoid an unnecessary call to a default constructor
*/
Parent::Parent():name("Mama"),age(21),length(1.60){};



void Parent::printObj(){
	cout<<" parent name is: "<<name<<endl;
	cout<<" age is: "<<age<<endl;
	cout<<" length  is: "<<length<<endl;
};

int main(){
	Parent p1;
/*	Parent p2 = Parent("Papa");
	Parent p3 = Parent("Opa" ,62);
	Parent p4 = Parent("Oma" ,61,1.40);*/
	
	Parent p2 = Parent();
	Parent p3 = Parent();
	Parent p4 = Parent();

	cout<<"initial state objects:" <<endl;
	p1.printObj();
	p2.printObj();
	p3.printObj();
	p4.printObj();
	// practice with access modifiers
	// name is private thus we can change it anywere
	p4.name = "Stiefmoeder";
	// age is protected thus only a function of Parent can access the variable
	// or a class which inherits from Parent
	// trying to modify age will result in a compile error
//	p4.age = 33;
	// length is private
	// thus modifying will produce a compile time error
//	p4.length = 2.0;
	p1.printObj();
	p2.printObj();
	p3.printObj();
	p4.printObj();
	return 0;
};
	
