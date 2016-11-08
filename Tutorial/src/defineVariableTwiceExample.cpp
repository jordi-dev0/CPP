#include <iostream>
#include <stdio.h>

using namespace std;

//declare variable
extern int a,b;
extern int c;
extern float f;
int main(){
	// definition of variable
	// and also initialization of variable
	int a = 10, b=20;
	int c = a + b;
	float f = 70.0/3.0;
	cout<< c<<endl;
	cout << f << endl;
	return 0;
}

// a (extern) variable declaration only has meaning during compile time,
// the 'real' definition has to be known at link time.
// a variable declaration is useful when you are using multiple files
// and you define your variable in on of the files which will be 
//available at the time of linking of a program
