#include <iostream> 
using namespace std;
int main(){
	int* ptr = NULL;
	cout<< " the value of a NULL pointer is "<<ptr<<endl;
	// NOTE DEREFERENCING a NULL POINTER CAUSES A SEGMENTATION FAULT!
//	cout<<" the *value of a NULL pointer is"<<*ptr<<endl;
	return 0;
}

