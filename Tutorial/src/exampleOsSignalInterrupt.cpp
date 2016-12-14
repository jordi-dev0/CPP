#include <iostream>
#include <csignal>
#include <unistd.h>
#include <cstdlib>
using namespace std;

void signalHandler(int signum){
	cout<< "interrupt signal : " <<signum<< " received"<<endl;
	exit(signum);
}


int main(){
	// register signal SIGINT and signal handler
	signal(SIGINT, signalHandler);
	while(1){
	cout<<"going to sleep ..." <<endl;
	sleep(1);
	}
	return 0;
}
