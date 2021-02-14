#include <iostream>
using namespace std;

int Sign(double a) {
    if (a == 0) {
        return 0;
    } else if (a > 0) {
        return 1;
    } else {
        return -1;
    }
}

int main() {
    double a, b;
    cin >> a >> b;
    
    cout << Sign(a) + Sign(b);
    
    return 0;
}
