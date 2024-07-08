#include <iostream>
#include <fstream>
using namespace std;

int main() {

    // task 1
    //int integer;
    //float realNumber;
    //string word;

    //cout << "Enter integer number: ";
    //cin >> integer;

    //cout << "Enter natural number: ";
    //cin >> realNumber;

    //cout << "Enter a word: ";
    //cin >> word;

    //ofstream file("1.txt");

    //if (file.is_open()) {
    //    for (int i = 0; i < 5; ++i) {
    //        file << integer << " ";
    //    }
    //    for (int i = 0; i < 5; ++i) {
    //        file << realNumber << " ";
    //    }
    //    for (int i = 0; i < 5; ++i) {
    //        file << word << " ";
    //    }

    //    file.close();
    //    cout << "Data written to file 1.txt" << endl;
    //}
    //else {
    //    cout << "Error opening file" << endl;
    //}


    // task 2
    //ofstream file("2.txt");

    //if (file.is_open()) {
    //    int a = 1, b = 1;
    //    for (int i = 0; i < 12; ++i) {
    //        file << a << " ";
    //        int c = a + b;
    //        a = b;
    //        b = c;
    //    }

    //    file.close();
    //    cout << "Fibonacci numbers written to file 2.txt" << endl;
    //}
    //else {
    //    cout << "Error opening file" << endl;
    //}


    // task 3
    ifstream file("hw1.txt");

    if (file.is_open()) {
        int a;
        cout << "Enter a number: ";
        cin >> a;

        int number;
        while (file >> number) {
            if (number > a) {
                cout << number << " ";
            }
        }
        file.close();
    }
    else {
        cout << "Error opening file" << endl;
    }



    return 0;

}