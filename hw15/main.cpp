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
    //ifstream file("hw1.txt");

    //if (file.is_open()) {
    //    int a;
    //    cout << "Enter a number: ";
    //    cin >> a;

    //    int number;
    //    while (file >> number) {
    //        if (number > a) {
    //            cout << number << " ";
    //        }
    //    }
    //    file.close();
    //}
    //else {
    //    cout << "Error opening file" << endl;
    //}


    // task 4
    //ifstream file("hw1.txt");

    //if (file.is_open()) {
    //    int array[13];
    //    int i = 0;
    //    int number;
    //    while (file >> number) {
    //        array[i] = number;
    //        ++i;
    //    }

    //    cout << "Positive numbers:" << endl;
    //    for (int i = 0; i < 13; ++i) {
    //        if (array[i] > 0) {
    //            cout << array[i] << " ";
    //        }
    //    }
    //    file.close();
    //}
    //else {
    //    cout << "Error opening file hw1.txt" << endl;
    //}


    //task 5
    //int excludedNumber;
    //cout << "Enter the excluded number: ";
    //cin >> excludedNumber;

    //ifstream inputFile("hw1.txt");
    //if (inputFile.is_open()) {
    //    ofstream outputFile("5.txt");
    //    if (outputFile.is_open()) {
    //        int number;

    //        while (inputFile >> number) {
    //            if (number != excludedNumber) {
    //                outputFile << number << " ";
    //            }
    //        }
    //        outputFile.close();
    //    }
    //    else {
    //        cout << "Error opening output file" << endl;
    //    }
    //    inputFile.close();
    //}
    //else {
    //    cout << "Error opening input file" << endl;
    //}


    // task 6
    ifstream inputFile1("hw1.txt");
    ifstream inputFile2("hw2.txt");

    if (inputFile1.is_open() && inputFile2.is_open()) {
        ofstream outputFileSum("hwSum.txt");
        ofstream outputFileMax("hwMax.txt");

        int number1, number2;
        while (inputFile1 >> number1 && inputFile2 >> number2) {
            outputFileSum << number1 + number2 << " ";
            outputFileMax << (number1 > number2 ? number1 : number2) << " ";
        }

        inputFile1.close();
        inputFile2.close();
        outputFileSum.close();
        outputFileMax.close();
    }
    else {
        cout << "Error opening input files" << endl;
    }



    return 0;

}