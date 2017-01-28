#include "../plotCpp.h"
#include "math.h"
#include <time.h>
#include <stdlib.h>
#include <stdio.h>
static const float PI = 3.14159;
static const float MIN_RADIUS = 10;
static const int N_CIRCLES = 50;


void GetRadius(int index, float& out){
    out = pow(1.10,index)*MIN_RADIUS;
}


void GetRadiusDelta(int index, float& out){
    float Rmin = 0.0;
    float Rmax = 0.0;
    GetRadius(index,Rmin);
    GetRadius(index+1,Rmax);
    out = (Rmax-Rmin);
}

void GetRandomAngle(float& a){
    a  = 2*PI*rand();
}
int main(){
    string file = "CircleCeption.eps";
    PsPage p(file);
    float x = 0.0;
    float y = 0.0;
    float gx = 0.0;
    float gy = 0.0;
    float r = 0.0;
    float dr = 0.0;
    float theta = 0.0;
    srand(time(NULL));
    p.DrawCircle(0.0,0.0,MIN_RADIUS);
    for (int i = 1;i<N_CIRCLES;i++){
	GetRadiusDelta(i-1,dr);
	GetRandomAngle(theta);
	x = dr*cos(theta);
	y = dr*sin(theta);
	GetRadius(i,r);
	p.DrawCircle(x+gx,y+gy,r);
	gx += x;
	gy += y;
    }
    return 0;

}
