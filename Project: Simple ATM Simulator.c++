#include <iostream>
using namespace std;

int main() {
    int pin = 1234, entered;
    double balance = 1000;
    int choice;
    double amount;

    cout << "Enter PIN: ";
    cin >> entered;

    if (entered != pin) {
        cout << "Wrong PIN";
        return 0;
    }

    while (true) {
        cout << "\n1 Balance\n2 Deposit\n3 Withdraw\n4 Exit\n";
        cin >> choice;

        switch (choice) {
            case 1: cout << balance << endl; break;
            case 2: cin >> amount; balance += amount; break;
            case 3: cin >> amount; balance -= amount; break;
            case 4: return 0;
        }
    }
}
