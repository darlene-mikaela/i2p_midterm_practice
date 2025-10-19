#include <iostream>
using namespace std;

int main() {
    int c; // candies bought
    float p; // exchange rate
  
    while (cin >> c >> p) {
        int exchange =  c*p;
        while (exchange > 0) {
            c += exchange;
            exchange = exchange*p;
        }
    }
    
    return 0;
}