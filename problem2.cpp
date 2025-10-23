#include <iostream>
using namespace std;

void NaturalNumbers50(int n=50){
    if (n==0) {
        return;
    }
    NaturalNumbers50(n-1);
    cout << n << endl;
}

int main() {
    NaturalNumbers50();
    return 0;
}
