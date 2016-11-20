#include <iostream>

using namespace std;

int MAX = 3;

int main(){
	int vars[MAX] = {41,314,12};
	int* ptrs[MAX];
	// fill pointer array with pointers to values
	for (int i = 0;i<MAX;i++){
		ptrs[i] = &vars[i];
	}
	// print values
	for (int ii = 0;ii<MAX;ii++){
		cout<< " pointer array value is "<<ptrs[ii];
		cout<< " deref point array value "<<*ptrs[ii];
		cout<<endl;
	}
	return 0;
}
	
