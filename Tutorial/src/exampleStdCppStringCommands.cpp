#include <iostream>
#include <string>
using namespace std;

int main(){
	string s1 = "hello?";
	string s2 = " is anybody out there?";
	string s3 = " is there anyone at home?";
	string s4;
	//copy string
	s4 = s3;
	cout<<" string 4 is "<< s4<<endl;

	// concat strings
	cout<<s1+s2+s3<<endl;

	cout<<"the size of "<<s1<<" is "<<(&s1)->size()<<endl;
	return 0;
}
