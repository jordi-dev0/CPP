#include <iostream>
#include <cstring>
using namespace std;

struct S{
	int a;
	int arr[3];
};
void printS(S s){
	cout<<" a  = "<<s.a<<endl;
	cout<<"arr[0] = "<<s.arr[0]<<endl;
	cout<<"arr[1] = "<<s.arr[1]<<endl;
	cout<<"arr[2] = "<<s.arr[2]<<endl;
}

void copyArray(int* src,int* dst, int size){
	memcpy(dst,src,size*sizeof(int));
		
}

int main(){
	S s = {1,{1,2,3}};
	printS(s);
	int b[3] = {42,42,42};
	copyArray(&b[0],&s.arr[0],3);
	printS(s);
	

return 0;
	
}
