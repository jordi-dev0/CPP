#include <iostream>

using namespace std;

int main(){
	char* pc = NULL;
	pc = new char[20];
	double* p = NULL;
	if (!(p=new double)){
		cout<<"out of memory"<<endl;
		return 0;
	}
	*p = 42.0;
	cout<<"the dynamically created memory holds :"<<*p<<endl;
	delete p;
	delete [] pc;
	return 0;
}
