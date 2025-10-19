#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int x1,x2,x3;
    int y1,y2,y3;
    cout << "Type the first 3D integer vector: ";
    cin >> x1 >> x2 >> x3;
    cout << "Type the second 3D integer vector: ";
    cin >> y1 >> y2 >> y3;
    float multiple = (float)(y1)/x1;
    if (x2*multiple==y2 && x3*multiple==y3) {
        cout << "Yes, they are pointing at the same direction." << endl;
    } else {    
        cout << "No, they are not pointing at the same direction." << endl;
    }
    
    int euclidean = pow(x1-y1,2) + pow(x2-y2,2) + pow(x3-y3,2);
    cout << "The square Euclidean distance is: " << euclidean << "." << endl;
    
    int normx = pow(x1,2) + pow(x2,2) + pow(x3,2);
    int normy = pow(y1,2) + pow(y2,2) + pow(y3,2);
    cout << "The square Euclidean norms are: " << normx << ", " << normy << ". ";
    if (normx < normy) {
        cout << "The second one is larger." << endl;
    } else if (normx > normy) {
        cout << "The first one is larger." << endl;
    } else {
        cout << "They both are the same." << endl;
    }
    return 0;
}