#include <iostream>
using namespace std;
#define _USE_MATH_DEFINES
#include <cmath>

double Fact2(int N) {
    double rez = 1;
    for (int n = N; n > 0; n -= 2) {
        rez *= (double)n;
    }
    
    return rez;
}

int main() {
    int n = 0;
    cin >> n;
    
    cout << Fact2(n);
    
    return 0;
}
