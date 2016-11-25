#include <iostream>

using namespace std;

class Duo{
	public:
	int c;
	int d;
	Duo();
	friend int plusC(Duo);
};

Duo::Duo():c(2),d(40){};

#include "randomFunction.h"
int main(){
	Duo d;
	cout<<" function result is "<<plusC(d)<<endl;
	return 0;
}
