#include <iostream>
#include <vector>

using namespace std;

int main(){
	//initialize vector
	vector<int> vec;
	int i;
	
	//disp original vector size
	cout<<" vector size is : "<<vec.size()<<endl;

	// add 5 elements to vector
	for(int i=0;i<5;i++){
		vec.push_back(i*i);
	}
	
	// disp vector size
	cout<<" vector size is : "<<vec.size()<<endl;

	//print every element of the vector
	for (int k = 0;k<5;k++){
		cout<<" vector element : "<<k<<" has value : "<<vec[i]<<endl;
	}
	
	// use iterator to access the values
	vector<int>::iterator iter = vec.begin();
	while(iter != vec.end()){
		cout<<"value of vec = "<<*iter<<endl;
		iter++;
	}
	return 0;
}
