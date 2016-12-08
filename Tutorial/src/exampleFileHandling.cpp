#include <iostream>
#include <fstream>
#include <string>


using namespace std;

int main(){
	// write some stuff to a file
	string data = "me loves data";
	ofstream fileWriteHandle;
	fileWriteHandle.open("random_file.txt",ios::app);
	fileWriteHandle<< data<<endl;
	fileWriteHandle << data<<" number two" <<endl;
	fileWriteHandle.close();


	// read some stuff drom a file
	string d = "";
	string tmp;
	ifstream fileReadHandle;
	fileReadHandle.open("random_file.txt" );
	while (!fileReadHandle.eof()){
		getline(fileReadHandle,tmp);
		d = d+tmp+"\n";
	}
	//fileReadHandle>>d;
	cout<<d<<endl;
	fileReadHandle.close();	
	return 0;
}
