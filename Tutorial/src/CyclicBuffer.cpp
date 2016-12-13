#include <iostream>
#include <vector>
using namespace std;

class Buffer{
	private:
		int length;
		int index;
		vector<int> buf;
	public:
	Buffer():length(),buf(),index(0){};
	void init(int l){
		length = l;
		buf.reserve(length);
	}
	void setIndex(int n){
		index = n;	
	}
	int getLength() const{
		return length;
	}
	void push(const int item){
		setIndex((index+1)%(length));
		buf[index] = item;
	}
	void print(){
		cout<<" buffer has length : "<<getLength()<<endl;
		for (int i=0;i<getLength();i++){
			cout<<" elem : "<<i<<" is "<<buf[i]<<endl;
		}
	}
};

int main(){
	Buffer b;
	b.init(8);
	b.push(42);
	b.push(42);
	b.push(42);
	b.push(42);
	b.push(42);
	b.push(42);
	b.push(42);
	b.push(42);
	b.push(100);
	b.push(100);
	b.push(100);
	b.push(100);
	b.push(100);
	b.print();
	return 0;
}

	
	
