#include <iostream>

using namespace std;

//declare function
int getAverage(int arr[], int size);

// define function

int getAverage(int arr[], int size){
	int i;
	int sum = 0;
	for (i=0;i<size;i++){
		sum += arr[i];
	}
	return (int)(double(sum)/size);
}

int main(){
	// define random array
	int rArray[10] = {10,10,10,10,10,10,10,10,10,11};
	cout<<" the average of the array is "<< getAverage(rArray,10)<<endl;
	return 0;
}
