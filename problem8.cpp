#include <iostream>
using namespace std;

int SumDigits(int n){
    if (n==0) {
        return 0;
    }
    return n%10 + SumDigits(n/10);
}

int main() {
    int userInt;
    cin >> userInt;
    cout << SumDigits(userInt) << endl;
    return 0;
}
