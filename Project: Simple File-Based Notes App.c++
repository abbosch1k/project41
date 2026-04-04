#include <iostream>
#include <fstream>
using namespace std;

int main() {
    int choice;
    string text;

    while (true) {
        cout << "\n1 Write Note\n2 Read Notes\n3 Exit\nChoice: ";
        cin >> choice;
        cin.ignore();

        switch (choice) {
            case 1: {
                ofstream file("notes.txt", ios::app);
                cout << "Enter note: ";
                getline(cin, text);
                file << text << endl;
                file.close();
                break;
            }

            case 2: {
                ifstream file("notes.txt");
                while (getline(file, text))
                    cout << text << endl;
                file.close();
                break;
            }

            case 3:
                return 0;
        }
    }
}
