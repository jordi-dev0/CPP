/*#ifndef _STRING_
#include <string>
#endif
*/
#include <string>
class Parent{
	public:
	std::string name;
//	Parent(std::string,int,double);
// found different way to initialize constructor
	Parent();
	void printObj(void);
	protected:
	int age;
	private:
	double length;
};
Parent::Parent():name("Nils"),age(100),length(2.0){};
