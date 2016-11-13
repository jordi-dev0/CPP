#include <iostream>

using namespace std;

// declare functions 
void printValue(int*);
void iterateValues(int*,int*);
// define functions
void printValue(int A = 0){
	cout<<A<<endl;
}

void iterateValues(int* ptr_printValue,int* ptr_offset, int* ptr_iterMax){
	int iterator = *ptr_offset;
	printValue();
	for(iterator;iterator<=*ptr_iterMax;iterator++){
		printValue((*ptr_printValue)++);
	}	

}
	
int main(){
	int A = 42;
	int B = 2;
 	int C = 12;
	iterateValues(&A,&B,&C);
	cout<<endl;
	cout<<endl;
	cout<<endl;
	printValue(A);
	return 0;
}

