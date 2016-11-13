#include <iostream>

using namespace std;

//declare function
void swap(int*,int*);

//define function
void swap(int* p_A, int* p_B){
	int tmp;
	tmp = *p_A;
	*p_A = *p_B;
	*p_B = tmp;	
}

void printValue(int* ptr_A, char kar){
	cout<<" Value of "<<kar<<" is "<<*ptr_A<<endl;
}

int main(){
	int C = 10;
	char cC = 'C';
	int D = 42;
	char cD = 'D';
	// print some stuff
	printValue(&C,cC);
	printValue(&D,cD);
	
	// perform function
	swap(&C,&D);

	// print some stuff
	printValue(&C,cC);
	printValue(&D,cD);
	return 0;
}
