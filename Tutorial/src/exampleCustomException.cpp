#include <iostream>
#include <string>

using namespace std;

class myException : public std::exception
{
public:
const char * what () const throw () {
	return "does not compute";
	}
};

int main(){
	try{
		throw myException();
	}catch(myException& e){
	cout<<"wut?"<<endl<< e.what()<<endl;
	}catch(std::exception& e){
		cout<<"dunno"<<endl;
	}
	return 0;
}
