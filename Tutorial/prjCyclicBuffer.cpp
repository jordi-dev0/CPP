#include <iostream>

using namespace std;

struct buffer_t {
	int element;
	void* ptr_Next;
};
void* initCyclicBuffer(buffer_t arr[],int size){
	if (size>1){
	// initialize buffer
	for (int i=0;i<size;i++){
		arr[i].element = 0;
		arr[i].ptr_Next = NULL;
	}
	// fill cyclic pointers
	for (int i=0;i<size-1;i++){
		arr[i].ptr_Next =static_cast<void*>(&arr[i+1]);
	}
	arr[size].ptr_Next =static_cast<void*>(&arr[0]);
	return arr[0].ptr_Next;
	} else{
	return NULL;
	}
}

void* pushBuffer(int value, void* pBuffer){
	buffer_t* b = static_cast<buffer_t*>(pBuffer);	
	b->element = value;
	return b->ptr_Next;
}
	
	 

int printBuffer(buffer_t buf){
	cout<<" buffer value is "<<buf.element;
	cout<<endl;
	cout<<" buffer pointer is "<<buf.ptr_Next;
	cout<<endl;
	return 0;
}

// overload function print function for buffer pointer
int printBuffer(buffer_t* ptrBuf){
	cout<<" buffer value is "<<ptrBuf->element;
	cout<<endl;
	cout<<" buffer pointer is "<<ptrBuf->ptr_Next;
	cout<<endl;
	return 0;
}
// overload print function for array buffer
int printBuffer(buffer_t arr[],int size){
	for (int i = 0 ; i<size;i++){
		cout<<" array element "<<i<<":"<<endl;
		cout<<"\t value is : "<<arr[i].element<<endl;
		cout<<"\t pointer is : "<<arr[i].ptr_Next<<endl;
	}
	return 0;
}
	

int printBuffer(void* ar,int size){
	buffer_t* arr = static_cast<buffer_t*>(ar);
	buffer_t* tmp = arr;
	for (int i = 0 ; i<size;i++){
		cout<<" array element "<<i<<":"<<endl;
		cout<<"\t value is : "<<tmp->element<<endl;
		cout<<"\t pointer is : "<<tmp->ptr_Next<<endl;
		tmp = static_cast<buffer_t*>(tmp->ptr_Next);
	}
	return 0;
}
int main(){
	// define test constants
	int arrayBufferSize = 3;

	// single element buffer test
	// declare buffer
	buffer_t thisBuffer;
	// init buffer
	thisBuffer.element = 1;
	thisBuffer.ptr_Next = NULL;
	printBuffer(thisBuffer);
	
	//test: buffer pointer
	// declare buffer pointer
	buffer_t* ptrBuffer;
	// define buffer
	ptrBuffer = &thisBuffer;
	ptrBuffer->element = 2;
	ptrBuffer->ptr_Next =  NULL;
	printBuffer(ptrBuffer);
	// note that when skipping assigning hte ptrBuffer to thisBuffer
	// ptrBuffer will not 'point' to anything so
	// trying to assign underlying values will not work since 
	// there is no underlying memory location is can point to
	
	// test: buffer array
	buffer_t arrBuffer[arrayBufferSize];
	// define init buffer array
	for (int i=0;i<arrayBufferSize;i++){
		arrBuffer[i].element = i+1;
		arrBuffer[i].ptr_Next = NULL;
	}
	printBuffer(arrBuffer,arrayBufferSize);
	
	//test: init cyclic pointer		
	static buffer_t cBuffer[3];
	void* initBufferPointer; 
	void* pNextBuffer;
	initBufferPointer = initCyclicBuffer(cBuffer,3);
	pNextBuffer = initBufferPointer;
	printBuffer(initBufferPointer,3);
	return 0;
}
	
