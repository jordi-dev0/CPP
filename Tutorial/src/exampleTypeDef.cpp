#include <iostream>
#include <stdio.h>
using namespace std;
// is using typedef legal here?
typedef char karakter;

int main(){
	// is using typedef legal here?
	typedef int getal; 
	// define variables
	karakter c[] = {"d"};
	getal Getal = 1;
	printf("my char is %s \n",c);
	printf("my int is %i \n",Getal);
	return 1;
}
