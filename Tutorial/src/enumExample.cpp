#include <iostream>
#include <stdio.h>

using namespace std;
enum Fruit{
	APPLE = 1 ,
	PEAR = 2,
	GRAPE = 3
}; 



int main(){
	Fruit seed = APPLE;
	cout<<"your chosen fruit is: "<<seed<<endl;
	cout<<"your fruit squared is "<<endl;
	switch(seed){
	case APPLE: cout<<seed*seed<<endl;break;
	case PEAR: cout<<seed*seed<<endl;break;
	case GRAPE: cout<<seed*seed<<endl;break;
	};



	return 1;

}
