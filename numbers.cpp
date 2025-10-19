#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Type an integer: ";
    cin >> num;

    // number of digits
    int digits = 0;
    if (num==0) digits = 1;
    for (int j = num; j>0; j/=10) {
        digits++;
    }
    cout << "The number of digits is: " << digits << ". " << (digits%2?"Odd.":"Even.") << endl;
    cout << num << endl;

    // reverse
    int reverse = 0;
    for (int i=num; i>0;  i/=10) {
        reverse = num%10 + reverse*10;
        num /= 10;
    }
    cout << "The reverse of the integer is: " << reverse << "." << endl;
    cout << (reverse==num?"Yes, it is a palindrome.":"No, it is not a palindrome.") << endl;
}