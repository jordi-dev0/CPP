#include <iostream>
#include <string> 
#include "./src/Parent.h"
using namespace std;
class Child{
	// private members
	public:
	void print(void);
	string name;
	int age;
	bool isBaby;
	Parent p;
	Child();
};
Child::Child():name("patrick")
		,age(2)
		,isBaby(1)
		,p(){};
void Child::print(void){
	string tmp = "";
	if (isBaby){
		tmp = "not";
	};
	
	cout<<" the childs name is: "<<name;
	cout<<", it is "<<age<<"  years of age"<<endl;
	cout<<" it is "<<tmp<<" a baby"<<endl;
	cout<<", it has parent"<<p.name<<endl;
}




int main(){
	Child C;
	C.print();
	return 0;
}	
