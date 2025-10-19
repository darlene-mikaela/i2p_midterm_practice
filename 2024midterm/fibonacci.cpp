#include <iostream>
using namespace std;

int main() {
    cout << "Welcome to the Fibonacci Sequence Generator!" << endl;
    while (true) {
        cout << "Enter the number of terms in the sequence (or enter 0 to exit): ";
        int num;
        cin >> num;
        if (num==0) {
            cout << "Exiting the program. Thank you!" << endl;
            break;
        }

        cout << "Fibonacci sequence: " << endl;
        int n1 = 0, n2 = 1;
        for (int i = 0; i < num; i++) {
            if (i!=0) {
                cout << ", "; 
            }
            cout << n1;
            int temp = n2;
            n2 += n1;
            n1 = temp;
        }
        cout << endl << endl;
    }
    return 0;
}