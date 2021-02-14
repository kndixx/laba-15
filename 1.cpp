#include <iostream>
using namespace std;

void PowerA3(double A, double& B) {
    B = A * A * A;
}

int main() {
    double a[5];
    double b[5];
    
    for (int i = 0; i < 5; ++i) {
        cin >> a[i];
    }
    
    for (int i = 0; i < 5; ++i) {
        PowerA3(a[i], b[i]);
    }
    
    for (int i = 0; i < 5; ++i) {
        cout << b[i] << " ";
    }
    
    return 0;
}
