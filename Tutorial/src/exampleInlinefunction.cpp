#include <iostream>

using namespace std;

inline int aPlus(int a, int b){return (a+b)*(b+a);};

int main(){
	int out = 0;
	for (int a =0;a<1e3;a++){
		for (int b = 0;b<1e3;b++){
			out+=aPlus(a,b);
//			cout<<aPlus(a,b)<<endl;
		}
	}	
	cout<< " computed value is "<<out<<endl;
	return 0;
}
