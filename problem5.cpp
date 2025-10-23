#include <iostream>
using namespace std;

int power(int base, int exponent) {
    if (exponent==0) {
        return 1;
    }
    return base * power(base, exponent-1);
}

int main() {
    int userBase, userExponent;
    cin >> userBase >> userExponent;
    cout << power(userBase, userExponent) << endl;
    return 0;
}
