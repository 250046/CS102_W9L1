#include <iostream>
using namespace std;

int NumPrinter(int num=10){
    if (num==-1)
    {
        return 0;
    }
    cout << num << endl;
    NumPrinter(num - 1);
}

int main() {
    NumPrinter();
    return 0;
}
