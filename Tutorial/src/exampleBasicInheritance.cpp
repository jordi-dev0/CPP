#include <iostream>
#include "Color.h"
#include "Tree.h"
using namespace std;

class TreePlus:public Tree, public Color{
	public:
	void print(){
	cout<<" my name is "<< name <<" and my color is "<<color<<endl;
	};
};

int main(){
	Color c;
	cout<<"the color is "<<c.getColor()<<endl;
	TreePlus t;
	t.print();
	return 0;
}
