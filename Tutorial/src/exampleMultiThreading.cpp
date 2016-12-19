#include <iostream>
#include <cstdlib>
#include <pthread.h>
#include <cstdint>
using namespace std;

#define NUM_THREADS 5

void * PrintHello(void *idin){
	long id;
	id = reinterpret_cast<long>(idin);
	for (int i = 0;i<10;i++){
		cout<< "Hello world! thread id : "<<id<<endl;
	}
	pthread_exit(NULL);
}

int main(){
	pthread_t threads[NUM_THREADS];
	int rc;
	int i;
	for ( i = 0; i<NUM_THREADS;i++){
		rc = pthread_create(&threads[i],NULL,PrintHello,reinterpret_cast<void*>(i));
	if (rc){
	cout<<"error: unable to create thread "<<rc<<endl;
	exit(-1);
	}
	}
	pthread_exit(NULL);
}	
