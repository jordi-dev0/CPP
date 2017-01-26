#include "../plotCpp.h"
#include "math.h"

static const float PI = 3.14159;
int main(){
    string file = "Circles.eps";
    PsPage p(file);
    int N = 100;
    float r = 40;
    Color c = {0,0,0};
    for (int i = 1;i<=N;i++){
	if (i%2==0){
	    int Ninner = (int)floor(PI*i)+1;
	    float spacer_angle =2*PI/(Ninner*(Ninner-1)); 
	    for (int j=0;j<Ninner-1;j++){
		float x = i*r*cos(2.0*PI*j/(Ninner-1)+spacer_angle);
		float y = i*r*sin(2.0*PI*j/(Ninner-1)+spacer_angle);
		p.DrawCircle(x,y,r);
	    }
	}else{
	p.DrawCircle(0.0,0.0,i*r);
	}
    }

    return 0;

}
