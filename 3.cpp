#include <iostream>
using namespace std;
#define _USE_MATH_DEFINES
#include <cmath>

double RingS(double R1, double R2) {
    return M_PI * (R1 * R1 - R2 * R2); 
}

int main() {
    
    double R1[3];
    double R2[3];
    
    for (int i = 0; i < 3; ++i) {
        cin >> R1[i] >> R2[i];
    }
    
    for (int i = 0; i < 3; ++i) {
        cout << RingS(R1[i], R2[i]) << " ";
    }
    
    return 0;
}
