#include <iostream>
using namespace std;

int ProductDigits(int n, int m){
    if (n==0 || m==0) {
        return 0;
    }
    return m + ProductDigits(n-1, m);
}

int main() {
    int userInt1, userInt2;
    cin >> userInt1 >> userInt2;
    cout << ProductDigits(userInt1, userInt2) << endl;
    return 0;
}
