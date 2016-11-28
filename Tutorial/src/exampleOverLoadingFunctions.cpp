#include <iostream>
#include <string>
using namespace std;

class printData{
	public:
	void print(double d){
		cout<<" output = "<<d<<endl;
	};
	void print(int i){
		cout<<" output = "<<i<<endl;
	};
	void print(string s){
		cout<<" output = "<<s<<endl;
	};
};

int main(){
	printData pd;
	pd.print(1);
	pd.print(42.0);
	pd.print("Lindi");
	return 0;
}
