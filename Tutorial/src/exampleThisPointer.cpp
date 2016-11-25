#include <iostream>
#include <string>
using namespace std;

class Fruit{
	public:
		Fruit();
	public:
		float radius;
		string name;
	public:
		void print(void){
			cout<<" my name is "<<this->name<<" and my size is";
			cout<<this->radius<<" meter"<<endl;};
		bool compare(Fruit f){
			return this->radius>f.radius;
		}	
};

Fruit::Fruit():radius(0.02),name("Grape"){};

int main(){
	Fruit f;
	Fruit a;
	a.radius = 1;
	a.name = " Hendrick";
	f.print();
	if (f.compare(a))
		cout<<f.name<<" is larger than "<<a.name<<endl;
	else{
		cout<<a.name<<" is larger than "<<f.name<<endl;
	}
	return 0;
}
