#ifndef _STRING_
#include <string>
#endif
enum colorEnum{
	RED,
	GREEN,
	BLUE,
	YELLOW,
	BROWN,
	BLACK,
	ORANGE,
	WHITE
};

class Color{
	protected:	
	colorEnum color;
	public:
	void setColor(int n){
		color = colorEnum(n);
	};
	colorEnum getColor(){
		return color;
	}
	Color(){
		color = colorEnum(0);
	};
};
	
