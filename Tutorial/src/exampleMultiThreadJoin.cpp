#include <iostream>
#include <chrono>
#include <unistd.h>
#include <pthread.h>
#include <cstdlib>
void* pauseThread(void* n){
//std::this_thread::sleep_for ( std::chrono::seconds(n));
//	std::cout<<"pause of "<<n<<" seconds completed"<<std::endl;
	int i;
	long sleep_time;
	sleep_time = reinterpret_cast<long>(n)+1;
	std::cout<<"sleep time : "<<sleep_time<<std::endl;
	sleep(sleep_time);
	std::cout<<"pause of "<<sleep_time<<" second completed \n";
	pthread_exit(NULL);
}

int main(){
	pthread_t threads[3];
	pthread_attr_t attr;
	int i, rc;
	void* status;
	// init and seet thread joinable
	pthread_attr_init(&attr);
	pthread_attr_setdetachstate(&attr,PTHREAD_CREATE_JOINABLE);

	std::cout<<"spawning 3 threads ...\n";
	for (i = 0;i<3;i++){
		rc = pthread_create(&threads[i],&attr,pauseThread,reinterpret_cast<void*>(i));
	if (rc==1){
		std::cout<<"failed to spawn thread \n";
		exit(-1);
	}
	}
	// freee attribute and wait fot the other threads
	pthread_attr_destroy(&attr);
	for(i=0;i<3;i++){
		rc = pthread_join(threads[i],&status);
		if (rc==1){
			std::cout<<"unable to join \n";
			exit(-1);
		}
	std::cout<<"main: completed thread id : "<<i;
	std::cout<<" exiting with status : "<< status<<std::endl;
	}
	std::cout<<"main program exit \n";
	pthread_exit(NULL);	
}

		
