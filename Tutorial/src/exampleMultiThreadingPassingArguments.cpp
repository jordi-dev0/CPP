#include <iostream>
#include <cstdlib>
#include "pthread.h"

using namespace std;
#define N_THREADS 10
struct thread_data{
	int thread_id;
	char *msg;
};

void *PrintHello(void *arg){
	struct thread_data *dat;
	dat = (struct thread_data *) arg;
	cout<< "thread id : "<<dat->thread_id;
	cout<< "  message : "<<dat->msg<<endl;
	pthread_exit(NULL);
}

int main(){
	pthread_t threads[N_THREADS];
	struct thread_data td[N_THREADS];

	int rc;
	int i;
	for(i=0;i<N_THREADS;i++){
	cout<<"main() : creating thread, "<<i<<endl;
	td[i].thread_id = i;
	td[i].msg =(char*) "hello :)";
	rc = pthread_create(&threads[i],NULL,PrintHello,(void *)&td[i]);
	if (rc){
		cout<<"error: unalbe to join "<<rc<<endl;
		exit(-1);
	}
	cout<<"Main: completed thread id : "<<i<<endl;
	cout<<"  exiting with status : "<<rc<<endl;
	}
	cout<<"Main : program exiting"<<endl;
	pthread_exit(NULL);
}
//g++ exampleMultiThreadingPassingArguments.cpp -lpthread
