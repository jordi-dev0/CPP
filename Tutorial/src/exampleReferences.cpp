#include <iostream>

using namespace std;

int main(){
	// declare variables
	int i;
	double d;

	// declare references variables
	int& r = i;
	double& rr = d;

	i=5;
	cout<<"value of i is "<<i<<endl;
	cout<<"value of i reference is "<<r<<endl;
	
	d=3.14;
	cout<<"value of d is "<<d<<endl;
	cout<<"value of d reference is"<<d<<endl;
	return 1;
}
