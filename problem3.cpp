#include <iostream>
using namespace std;

int SumOfNumbers(int n) {
    if (n==0) {
        return 0;
    } 
    return n + SumOfNumbers(n-1);
}

int main() {
    int userInt;
    cin >> userInt;
    cout << SumOfNumbers(userInt) << endl;
    return 0;
}
