#include "Tree.h"

using namespace std;

int main(){
	Tree t;
	Tree d;
	d.setName("Bob");
	d.setHeight( 12);
	Tree * pd = &d;
	t.printCompare(pd);
	return 0;
}
