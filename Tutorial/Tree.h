#include <iostream>
#include <string>
class Tree{
	public:
	Tree();
	void setName(std::string s){
		this->name = s;
	};
	void setHeight(double h){
		this->Height = h;
	};
	bool compare(Tree *t){
		return this->Height>t->Height;
	};
	bool compare(Tree t){
		return this->Height>t.Height;
	};
	void printCompare(Tree* pt){
		if (this->compare(pt)){
			std::cout<<this->name<<" is larger than "<<pt->name<<std::endl;
		}else{
			std::cout<<pt->name<<" is larger than "<<this->name<<std::endl;
		}
	};
	private:
		std::string name;
		double Height;
};
Tree::Tree():name("Patrick"),Height(100.0){};
