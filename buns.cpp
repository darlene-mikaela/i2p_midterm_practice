#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main() {
    // get total of days
    int n;
    cin >> n;
    int buns[n];
    cin.ignore();

    // store into buns
    string str;
    getline(cin, str);
    stringstream ss(str);
    for (int i = 0; i < n; ++i) {
        ss >> buns[i];
    }
    
    int total = 0;
    for (int j = 1; j <= n; j++) {
        total += buns[j-1]*j;
    }
    cout << total << endl;
    return 0;
}