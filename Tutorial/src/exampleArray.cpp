#include <iostream>
#include <cmath>

using namespace std;

int main(){
	int i;
	int iArray[5] = {1,2,3,4,5};
	// note CPP array have zero based index!
	for (i=0;i<5;i++){
		cout<<" array element squared is "<<pow(iArray[i],2)<<endl;
	}
	return 0;
}
