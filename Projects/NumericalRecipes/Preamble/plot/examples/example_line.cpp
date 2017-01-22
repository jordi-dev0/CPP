#include "../plotCpp.h"

int main(){
    string file = "tmp.eps";
    PsPage p(file);
    p.DrawLine(0.0,0.0,25.0,25.0);

    return 0;

}
