#include <iostream>

using namespace std;

#define MAX 3


int main(){
	int vars[MAX] = {12,42,314};
	int* ptrs[MAX];
	int** parent_ptr = NULL;
	// fill pointer array
	for (int i=0;i<MAX;i++){
		ptrs[i] = &vars[i];
	}
	// fill parent pointer
	parent_ptr = &ptrs[0];

	// print content through parent pointer
	for (int i =0; i<MAX;i++){
		cout<<" pointer values is "<<(*parent_ptr+i);
		cout<<" deref pointer value is "<<*(*parent_ptr+i);
		cout<<endl;
	}	
	return 0;
}
