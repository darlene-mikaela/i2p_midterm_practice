#include <iostream>
using namespace std;

int main() {
    while (true) {
        bool first = true;
        int num;
        cout << "Type an integer x (Stop at 0): ";
        cin >> num;

        if (num==0) {
            cout << "Stop";
            return 0;
        }
        cout << "The prime factor of x is: ";

        // check factors until sqrt(num) (after that the multiplication just flips)
        int counter = 0;
        for (int i = 2; i <= num; ++i) {
            // check if i is prime factor
            if (num%i==0) {
                while (num%i==0) {
                    counter++;
                    if (first==false) {
                        cout << "*";
                    }
                    cout << i;
                    first = false;
                    num /= i;
                }
            }
        }
        
        cout << endl;

        if (counter == 1) {
            // num is a prime
            cout << "Is x a prime: Yes" << endl;
        } else {
            cout << "Is x a prime: No" << endl;
        }
    }
}
