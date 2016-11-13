#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

// C++ does not allow to retun an entire array as an argument to a function. 
// However you can return a piinter tot an array by specifying the arrays names without an index
// e.g. int* foo(){}

// note that C++ does not advocate the use of local variable outside the local scope
// i.e. the return pointer needs to be static.

// print a random array of numbers

int * getRandomSequence(){
	// declare return array
	static int randomArray[25];
	int numberOfElements = 25;	
	// set seed
	srand( (unsigned) time(NULL));
	int i;
	for (i=0;i<numberOfElements;i++){
		randomArray[i] = rand();
	}
	return randomArray;
}

void printArray(int* p ,int size){
	int i;
	for (i=0;i<size;i++){
		cout<< " element "<<i+1<<" is "<<*(p+i)<<endl;
	}
}

int main(){
	int arr[25];
	int* pointer;
	pointer = getRandomSequence();
	printArray(pointer,25);
	return 0;
}
