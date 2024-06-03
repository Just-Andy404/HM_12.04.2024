#include <iostream>
#include "Array.h"
using namespace std;


void menu() {
    int choice;
    int howManyItems = 0;
    Array* arr = nullptr;

    while (true) {
        cout << "1) Create array\n";
        cout << "2) Fill array\n";
        cout << "3) Display array\n";
        cout << "4) Sort array\n";
        cout << "5) Find minimum\n";
        cout << "6) Find maximum\n";
        cout << "7) Add element\n";
        cout << "0) Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        cout << "=======================" << endl;

        switch (choice) {
        case 1:
            cout << "Enter the size of the array: ";
            cin >> howManyItems;
            arr = new Array(howManyItems);
            cout << "=======================" << endl;
            break;
        case 2:
            if (arr != nullptr) {
                arr->fillArray();
            }
            else {
                cout << "Create an array first." << endl;
            }
            cout << "=======================" << endl;
            break;
        case 3:
            if (arr != nullptr) {
                arr->output();
            }
            else {
                cout << "Create an array first." << endl;
            }
            cout << "=======================" << endl;
            break;
        case 4:
            if (arr != nullptr) {
                arr->sortArray();
            }
            else {
                cout << "Create an array first." << endl;
            }
            break;
        case 5:
            if (arr != nullptr) {
                cout << "Minimum value: " << arr->searchMin() << endl;
            }
            else {
                cout << "Create an array first." << endl;
            }
            cout << "=======================" << endl;
            break;
        case 6:
            if (arr != nullptr) {
                cout << "Maximum value: " << arr->searchMax() << endl;
            }
            else {
                cout << "Create an array first." << endl;
            }
            cout << "=======================" << endl;
            break;
        case 7:
            if (arr != nullptr) {
                int data;
                cout << "Enter data: ";
                cin >> data;
                arr->addElement(data);
            }
            else {
                cout << "Create an array first." << endl;
            }
            cout << "=======================" << endl;
            break;
        case 0:
            delete arr;
            return;
        default:
            cout << "Invalid choice. Please try again." << endl;
        }
    }
}

int main() {
    menu();
    return 0;
}
