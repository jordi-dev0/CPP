#include <iostream>
#include "Fabric.h"
using namespace std;

class Wool: public Fabric{
	public:
	Wool();
	void setName(std::string s){
		name = s;
	}
	string getName(){
		return name;
	}
	void print(){
		cout<<" name : "<<this->getName()<<endl;
		cout<<" price : "<<this->getPrice()<<endl;
		cout<<" area : "<< this->getArea()<<endl;
	}
};

// define constructor
Wool::Wool():Fabric(){};

int main(){
	Wool w;
	cout<<"on init: "<<endl;
	w.print();
	// modiy member variables
	w.setName("Bart");
	w.setPrice(42.0);
	w.setArea(42.0);
	cout<<" after modification : "<<endl;
	w.print();
	return 0;
};
	

	
