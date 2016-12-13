#include <iostream>

using namespace std;

namespace forrest{
	int leaf(){
		return 42;
	}
};

using namespace forrest;

int main(){
	cout <<"return value is : "<<leaf()<<endl;
	return leaf();
}
