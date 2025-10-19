#include <iostream>
using namespace std;

int main() {
    int n;
    while (cin >> n) {
        int total = 1; // first term
        for (int i = 1; i < n; i++) {
            total += i;
        }
        cout << total << endl;
    }

    return 0;
}