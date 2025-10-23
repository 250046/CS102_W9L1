#include <iostream>
using namespace std;

double SumSeries(int n){
    if (n==0) {
        return 0;
    }
    return 1.0/(n*n) + SumSeries(n-1);
}

int main() {
    int userInt;
    cin >> userInt;
    cout << SumSeries(userInt) << endl;
    return 0;
}
