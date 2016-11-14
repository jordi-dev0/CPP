#include <iostream>

using namespace std;

int main(){
	int var1;
	char var2[10];

	cout<<" address of var1 is: "<<endl;
	cout<< &var1<<endl;

	cout<< "address of var 2 is:  "<<endl;
	// doesnt var2 point to the first element in the char array?
	cout<< &var2<<endl;
	return 0;
}
