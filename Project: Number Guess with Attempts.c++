#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    int num = rand()%50 + 1;
    int guess;

    for (int i = 1; i <= 5; i++) {
        cin >> guess;

        if (guess == num) {
            cout << "Win";
            return 0;
        }
        else if (guess < num) cout << "Higher\n";
        else cout << "Lower\n";
    }

    cout << "Lose. Number was " << num;
}
