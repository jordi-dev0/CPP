#include <iostream>

using namespace std;

int main(){
	int myArray[5] = { 1,2,3,4,5};
	

	// note that an array variable name is just
	// as constant pointer to the first element in the array
	//i.e.
	cout<<" this is the first element of the array "<<*myArray<<endl;
	cout<<" this is the last element of the array "<<*(myArray+4)<<endl;
	return 0;
}
