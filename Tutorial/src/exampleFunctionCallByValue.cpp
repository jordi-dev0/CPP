#include <iostream>

using namespace std;

// declare function 

int addNumber(int, int);

// define function
int addNumber(int A, int B){
	return A+B;
}

//define main 
int main(){
	int C = 100;
	int D = 101;
	cout << " adding "<<C<<" and "<<D<<" equals "<< addNumber(C,D)<<endl;
	return 0;
}
