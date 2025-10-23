#include <iostream>
using namespace std;

int factorial(int n) {
    if (n==0) {
        return 1;
    }
    return n * factorial(n-1);
}

int main() {
    int userInt;
    cin >> userInt;
    cout << factorial(userInt) << endl;
    return 0;
}
