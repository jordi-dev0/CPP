#include "../plotCpp.h"
#include "math.h"

static const float PI = 3.14159;
static const float RADIUS = 250.0;

void fPos(int phase, int period,float& rx, float& ry){
    rx =RADIUS*cos(2.0*PI*phase/period);
    ry =RADIUS*sin(2.0*PI*phase/period);
    
}

void fColor( Color& rColor, float x, float y){
    rColor.R = (x/RADIUS);
    rColor.G = (y/RADIUS);
    rColor.B = sqrt(pow(x/RADIUS,2.0)+pow(y/RADIUS,2.0));
}


int main(){
    string file = "Lines.eps";
    PsPage p(file);
    int N = 2000;
    float x = 0;
    float y = 0;
    Color c = {0,0,0};
    for (int i = 0;i<N;i++){
	fPos(i,N,x,y);
	fColor(c,x,y);
	p.DrawLine(0.0,0.0,x,y,c);

    }

    return 0;

}
