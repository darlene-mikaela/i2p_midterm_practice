#include <iostream>
using namespace std;

int main() {
    cout << "Welcome to the Shape Drawing Program!" << endl
         << "1. Draw a sqaure" << endl
         << "2. Draw a rectangle" << endl
         << "3. Draw a triangle" << endl
         << "4. Exit" << endl;
    while (true) {
        int choice;
        cout << endl << "Enter your choice: ";
        cin >> choice;

        if (choice==4) {
            cout << "Thank you for using the Shape Drawing Program. Have a great day!" << endl;
            break;
        }

        if (choice==1) {
            cout << "Enter side length: ";
            int length;
            cin >> length;
            for (int i = 0; i < length; i++) {
                for (int j = 0; j < length; j++) {
                    if (i==0||i==length-1) {
                        cout << "*";
                    } else {
                        if (j==0||j==length-1) {
                            cout << "*";
                        } else {
                            cout << " ";
                        }
                    }
                }
                cout << endl;
            }
        }

        if (choice==2) {
            int width, height;
            cout << "Enter the width of the rectangle: ";
            cin >> width;
            cout << "Enter the height of the rectangle: ";
            cin >> height;

            for (int i = 0; i < height; i++) {
                for (int j = 0; j < width; j++) {
                    if (i==0||i==height-1) {
                        cout << "*";
                    } else {
                        if (j==0||j==width-1) {
                            cout << "*";
                        } else {
                            cout << " ";
                        }
                    }
                }
                cout << endl;
            }
        }

        if (choice==3) {
            cout << "Enter triangle height: ";
            int height;
            cin >> height;

            for (int i = 1; i <= height; i++) {
                for (int j = 1; j <= i; j++) {
                    cout << "*";
                }
                cout << endl;
            }
        }
    }
    return 0;
}