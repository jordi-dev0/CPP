#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

// declare function
int* getRandomSequence();
void printSequence(int*);

// define functions
int* getRandomSequence(){
	static int seq[10];
	// set seed
	srand( (unsigned) time( NULL) );
	for(int i=0;i<10;i++){
		seq[i] = rand();
	}
	return seq;
}

void printSequence(int* seq){
	for (int i =0;i<10;i++){
		cout<<" element "<<i<<" is ";
		cout<<*(seq+i)<<endl;
	}
}

int main(){
	int* r;
	r = getRandomSequence();
	printSequence(r);
	return 0;
}

