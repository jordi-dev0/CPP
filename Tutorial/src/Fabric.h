
#include <string>
class Fabric{
	protected:
//	virtual Fabric();
// apparently constructor can not be virtaul, why?

	Fabric():name("Bert"),price(0.0),area(0.0){};
//	virtual ~Fabric();	

	public:
	double price;
	double area;
	std::string name;
	//pure virtual function
	virtual void setName(std::string) = 0;
	virtual std::string getName() = 0;
	void setPrice(double d){
		price = d;
	}
	void setArea(double d){
		area = d;
	}
	double getPrice(){
		return price;
	}
	double getArea(){
		return area;
	}
};
