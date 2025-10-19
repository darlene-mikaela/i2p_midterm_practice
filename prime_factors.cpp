#include <iostream>
using namespace std;

int main() {
    int num;
    cin >> num;
    bool first = true;

    // handle factors of 2 first
    int power = 0;
    while (num%2==0) {
        power++;
        num /= 2;
    }
    if (power>0) {
        if (power>1) {
            cout << 2 << "^" << power;
        } else {
            cout << 2;
        }
        first = false;
    }

    // check prime factor
    for (int i = 3; i*i <= num; i++) {
        // check if divisor is prime
        int counter = 0;
        for (int j = 1; j <= i; j++) {
            if (i%j==0) counter++;
        }
        if (counter==2 && num%i==0) {
            // is prime and a divisor
            int power = 0;
            while (num%i==0) {
                power++;
                num /= i;
            }
            if (first) {
                if (power>1) {
                    cout << i << "^" << power;
                } else {
                    cout << i;
                }
                first = false;
            } else {
                if (power>1) {
                    cout << " * " << i << "^" << power;
                } else {
                    cout << " * " << i;
                }
            }
        }
    }

    if (num > 1) { // is a prime factor
        if (first) {
            cout << num;
        } else {
            cout << " * " << num;
        }
    }

    cout << endl;
    return 0;
}