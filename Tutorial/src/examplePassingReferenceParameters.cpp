#include <iostream>

using namespace std;

void swap(int& x, int& y){
	int tmp;
	tmp = x;
 	x=y;
	y=tmp;
	return;
}

int main(){
	int a =100;
	int b = 42;
		
	cout<<"before swap, a is "<<a<<endl;
	cout<<"before swap, b is "<<b<<endl;
	
	// perform swap
	swap(a,b);
	
	cout<<"after swap, a is "<<a<<endl;
	cout<<" after swap,  b is "<<b<<endl;

	return 0;
}
