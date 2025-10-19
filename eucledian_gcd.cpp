#include <iostream>
using namespace std;

int main() {
    int a,b;
    while (cin >> a >> b) {
        int r = 1;
        if (a<b) {
            a = a^b;
            b = a^b;
            a = a^b;
        }
        while (b != 0) {
            r = a%b;
            a = b;
            b = r;
        }
        cout << a << endl;
    }
    return 0;
}