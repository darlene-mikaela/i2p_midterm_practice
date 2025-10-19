#include <iostream>
using namespace std;

int main() {
    int N;
    float L, S;
    cout << "Type an integer N: ";
    cin >> N;

    cout << "Sequentially type N values:" << endl;
    for (int i = 0; i < N; i++) {
        float input;
        cin >> input;
        if (i==0) {
            L = input, S = input;
        }
        L = (input>L?input:L);
        S = (input<S?input:S); 
    }
    cout << "The largest value L: " << L << endl;
    cout << "The smallest value S: " << S << endl;
    cout << "The integers between L and S are:";
    
    int counter = (S>0?S+1:S);
    while (counter < L) {
        cout << " " << counter;
        counter++;
    }
    cout << endl;
}