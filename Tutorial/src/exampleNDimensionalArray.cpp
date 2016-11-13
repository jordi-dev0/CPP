#include <iostream>

using namespace std;

int main(){
	//define N dimensional array
	int nDimArray[2][2][2] = {{{1,2},{3,4}},{{5,6},{7,8}}};
	int i;
	// print diagonal
	for (i=0;i<2;i++){
		cout<<" diagonal element "<<i+1<<" equals"<<nDimArray[i][i][i]<<endl;
	}
	return 0;
}
