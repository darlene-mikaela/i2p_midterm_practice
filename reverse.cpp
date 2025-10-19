#include <iostream>
using namespace std;

int main() {
    int num, reversed = 0;
    cin >> num;

    for (; num > 0; num /= 10) {
        reversed = num%10 + reversed*10;
    }
    cout << reversed << endl;

    return 0;
}