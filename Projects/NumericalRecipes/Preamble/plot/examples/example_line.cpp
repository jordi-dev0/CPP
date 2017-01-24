#include "../plotCpp.h"

int main(){
    string file = "tmp.eps";
    PsPage p(file);
    p.DrawLine(0.0,0.0,25.1,25.1);
    return 0;

}
