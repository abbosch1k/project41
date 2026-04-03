#include <iostream>
using namespace std;

int main() {
    int choice;
    double a, b;

    while (true) {
        cout << "1 Add 2 Sub 3 Mul 4 Div 5 Exit: ";
        cin >> choice;

        if (choice == 5) break;

        cin >> a >> b;

        switch (choice) {
            case 1: cout << a+b << endl; break;
            case 2: cout << a-b << endl; break;
            case 3: cout << a*b << endl; break;
            case 4: cout << a/b << endl; break;
        }
    }
}
