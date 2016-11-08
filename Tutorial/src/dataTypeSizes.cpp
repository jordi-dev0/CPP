#include <iostream>
#include <stdio.h>

using namespace std;

int main(){
/*	cout << printf("size of char : %li     \n",sizeof(char));
	cout << printf("size of int: %li     \n",sizeof(int));
	cout << printf("size of short int: %li    \n",sizeof(short int));
	cout << printf("size of long int : %li    \n",sizeof(long int));
	cout << printf("size of float : %li     \n",sizeof(float));
	cout << printf("size of double : %li    \n",sizeof(double));
	cout << printf("size of long long int : %li   \n",sizeof(long long int));
	cout << printf("size of wchar_t : %li    \n",sizeof(wchar_t));*/
	cout << "size of char: "<<sizeof(char)<<endl;
	cout << "size of int: "<<sizeof(int)<<endl;
	cout << "size of short int: "<<sizeof(short int)<<endl;
	cout << "size of long int: "<<sizeof(long int)<<endl;
	cout << "size of long long int: "<<sizeof(long long int)<<endl;
	cout << "size of float: "<<sizeof(float)<<endl;
	cout << "size of double: "<<sizeof(double)<<endl;
	cout << "size of wchart_t: "<<sizeof(wchar_t)<<endl;
	return 1;
}
