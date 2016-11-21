/*#ifndef _STRING_
#include <string>
#endif
*/
class Parent{
	public:
	std::string name;
	Parent(std::string,int,double);
	void printObj(void);
	protected:
	int age;
	private:
	double length;
};
