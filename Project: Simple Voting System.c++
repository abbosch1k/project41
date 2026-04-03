#include <iostream>
using namespace std;

int main() {
    int votesA = 0, votesB = 0, choice;

    for (int i = 0; i < 5; i++) {
        cin >> choice;

        if (choice == 1) votesA++;
        else votesB++;
    }

    if (votesA > votesB) cout << "A wins";
    else cout << "B wins";
}
