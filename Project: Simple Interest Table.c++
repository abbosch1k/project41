#include <iostream>
using namespace std;

int main() {
    double p = 1000, r = 5;

    for (int t = 1; t <= 5; t++) {
        double si = (p*r*t)/100;
        cout << "Year " << t << ": " << si << endl;
    }
}
