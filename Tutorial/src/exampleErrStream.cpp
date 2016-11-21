#include <iostream>

using namespace std;

int main(){
	int number;
	cout<<"enter a number less than 2"<<endl;
	cin>>number;
	if (number>=2){
		cerr<<"error message: your number is not less than 2"<<endl;
	}else{
		cout<<"your number is indeed less than 2!"<<endl;
	}
	return 0;
}
		
