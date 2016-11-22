/*#ifndef _STRING_
#include <string>
#endif
*/
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
