#include <iostream>

using namespace std;

int main(){
	bool isCool = false;
	bool isWarm = true;
	bool isWet = false;
	int a;	
	// use ? operator
	(isCool&&isWarm || isWet) ? a=1 : a=2;
	cout<<a<<endl;
	return 0;
}
