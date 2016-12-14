#include <iostream>
#include <unistd.h>
#include <cstdlib>
#include <csignal>

using namespace std;

void signalHandler(int s){
	cout<<endl<<" interrupt detected "<<s<<endl;
	exit(s);
}
int main(){
	int i =0;
	//register signal sigint and signal handler
	signal(SIGINT,signalHandler);
	while(++i){
	cout<<"going to sleep ..." <<endl;
	if (i==3){
		raise(SIGINT);
	}
	sleep(1);
	}
	return 0;
}
