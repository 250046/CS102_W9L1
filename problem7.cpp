#include <iostream>
using namespace std;

double SumSeries2(int n){
    if (n==0) {
        return 0;
    }
    return (1.0/(n*(n+2))) + SumSeries2(n-1);
}

int main() {
    int userInt;
    cin >> userInt;
    cout << SumSeries2(userInt) << endl;
    return 0;
}
