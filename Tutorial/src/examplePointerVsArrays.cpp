#include <iostream>

using namespace std;

int getNumberByPointerArithmetic(int* arr, int index){
	return *(arr+index);
}

int getNumberByArrayFunction(int arr[], int index){
	return arr[index];
}

int main(){
	int myArray[3] = {42, 314, 12};
	int a_size = 3;
	// this array can be accessed by pointer arithmetic
	for (int i = 0;i<a_size;i++){
		cout<<"this value found by pointer arithmetic is ";
		cout<<getNumberByPointerArithmetic(&(myArray[0]),i)<<endl;
	}
	// or you can acess the data through the array format
	for (int i =0;i<a_size;i++){
		cout<<"this value is found by array manipulation ";
		cout<<getNumberByArrayFunction(myArray,i)<<endl;
	}
	return 0;
}
