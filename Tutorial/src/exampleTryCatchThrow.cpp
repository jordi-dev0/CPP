#include <iostream>
#include <string>
using namespace std;

int causeException(){
	throw string("nasty error!");
	return 0;
}

	

int main(){
	try{
	cout<<causeException();
	}catch(string e){
		cout<<"caught some nasty exception"<<endl;
	}
	return 0;
}
