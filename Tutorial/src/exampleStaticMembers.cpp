#include <iostream>
#include "Tree.h"
using namespace std;

class Forrest:public Tree{
	public:
	 static int nTree;
	Forrest(){
		Tree();
		nTree++;
	};
	static int getNumberOfTrees(){
		return nTree;
	}
};

int Forrest::nTree = 0;

int main(){
	cout<<" initially the number of tree is ";
	cout<<Forrest::getNumberOfTrees()<<endl;
	Forrest f;
	cout<<"number of trees " <<f.nTree<<endl;
	Forrest f1;	
	cout<<"number of trees "<<f1.nTree<<endl;
	return 0;
}
