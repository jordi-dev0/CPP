#include <iostream>

using namespace std;

//declare functions
void swap(int &a, int &b);
void print(int*,char);

//define function
void swap(int &A, int &B){
	int tmp;
	tmp = B;
	B = A;
	A = tmp;
}

void printValue(int* A, char C){
	cout<< "Value of "<<C<<" equals "<<*A<<endl;
}

int main(){
	int Y = 41;
	int X = 42;
	//print before swap
	printValue(&Y,'Y');
	printValue(&X,'X');
	// preform swap
	swap(X,Y);
	//print before swap
	printValue(&Y,'Y');
	printValue(&X,'X');
	return 0;
}
