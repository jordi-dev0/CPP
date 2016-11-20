#include <iostream>

using namespace std;

double arr[4] = {1.0, 3.14, 42.0, 43.0};

double& setVal(int i){
	return arr[i];
}

void printArr(double arr[]){
	for (int i=0;i<4;i++){
		cout<<" element "<<i<<" is ";
		cout<<arr[i]<<endl;
	}
	return;
}

int main(){
	cout << "value before change"<<endl;
	for (int i=0;i<4;i++){
		arr[i] = i;
	}
	cout<<"initial values:"<<endl;
	printArr(arr);
	// use setVal
	
	setVal(0) = 42.0;
	setVal(1) = 42.0;

	cout<<"after settings values"<<endl;
	printArr(arr);
	return 0;
}

