#include <iostream>
using namespace std;
#define _USE_MATH_DEFINES
#include <cmath>

int Sign(double a) {
    if (a == 0) {
        return 0;
    } else if (a > 0) {
        return 1;
    } else {
        return -1;
    }
}

int Quarter(double x, double y) {
    if (Sign(x) == Sign(y)) {
        if (x > 0) {
            return 1;
        } else {
            return 3;
        }
    } else {
        if (x < 0) {
            return 2;
        } else {
            return 4;
        }
    }
}

int main() {
    double x[3];
    double y[3];
    
    for (int i = 0; i < 3; ++i) {
        cin >> x[i] >> y[i];
    }
    
    for (int i = 0; i < 3; ++i) {
        cout << Quarter(x[i], y[i]) << " ";
    }
    
    return 0;
}
