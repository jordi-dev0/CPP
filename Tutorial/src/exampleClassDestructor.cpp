#include <iostream>
#include <string>
using namespace std;


class Tree{
	// these are default private
	int n_leaves;
	string name;
	double height;
	void setLeaves(int);
	void setName(string);
	void setHeight(double);
	int getLeaves(void);
	string getName(void);
	double getHeight(void);
	public:
	void print(void);
	Tree();
	~Tree();
	
};
Tree::Tree():n_leaves(100),name("Patrick"),height(20){};
Tree::~Tree(){
	cout<<"I died! :("<<endl;
}
int main(){
	Tree T;
	T.print();
	return 0;
}
int Tree::getLeaves(){
	return n_leaves;};
string Tree::getName(){return name;};
double Tree::getHeight(){return height;};
void Tree::setLeaves(int n){ n_leaves = n;};
void Tree::setName(string s){ name = s;};
void Tree::setHeight(double d){ height = d;};
void Tree::print(){
	cout<<"Hi, I am"<<Tree::getName()<<" , I have "<<Tree::getLeaves()<<" leaves and";
	cout<<" I am "<<Tree::getHeight()<<" meters tall"<<endl;
}



