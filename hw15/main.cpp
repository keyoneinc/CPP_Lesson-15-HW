#include <iostream>
#include <fstream>
using namespace std;

int main() {

    // task 1
    int integer;
    float realNumber;
    string word;

    cout << "Enter integer number: ";
    cin >> integer;

    cout << "Enter natural number: ";
    cin >> realNumber;

    cout << "Enter a word: ";
    cin >> word;

    ofstream file("1.txt");

    if (file.is_open()) {
        for (int i = 0; i < 5; ++i) {
            file << integer << " ";
        }
        for (int i = 0; i < 5; ++i) {
            file << realNumber << " ";
        }
        for (int i = 0; i < 5; ++i) {
            file << word << " ";
        }

        file.close();
        cout << "Data written to file 1.txt" << endl;
    }
    else {
        cout << "Error opening file" << endl;
    }






    return 0;

}