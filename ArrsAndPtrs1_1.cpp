#include <iostream>
#include <iomanip>
#include <cwchar>
#include <windows.h>
#include <string>


using namespace std;

void showPointer(string, int*, string);
void showArray(int *arr, int n);

int main() {
    int n = 0;
    cout << "Amount of elements in an array: ";
    cin >> n;
    int arr[n];
    cout << "The array:" << endl;
    showArray(arr, n);
    cout << "Fill in the array: " << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << endl << "The updated array: " << endl;
    showArray(arr, n);
    // Pointers
    int arrId = 0;
    cout << "----------POINTERS----------" << endl;
    SetConsoleTextAttribute( GetStdHandle( STD_OUTPUT_HANDLE ), 1 );
    cout << " | int *pt;" << endl;
    SetConsoleTextAttribute( GetStdHandle( STD_OUTPUT_HANDLE ), 7 );
    int *pt;
    cout << "Id from the array to point to: ";
    cin >> arrId;
    pt = &arr[arrId];
    SetConsoleTextAttribute( GetStdHandle( STD_OUTPUT_HANDLE ), 1 );
    cout << " | pt = &arr[" << arrId << "];" << endl;
    SetConsoleTextAttribute( GetStdHandle( STD_OUTPUT_HANDLE ), 6 );
    cout << "arr[" << arrId << "]: " << arr[arrId] << endl;
    cout << "*pt: " << *pt << endl;
    cout << "&arr[" << arrId << "]: " << &arr[arrId] << endl;
    cout << "pt: " << pt << endl;
    cout << "&pt: " << &pt << endl;
    SetConsoleTextAttribute( GetStdHandle( STD_OUTPUT_HANDLE ), 7 );
    cout << "You have the pointer: " << endl;
    char intStr[20];
    itoa(arrId, intStr, 10);
    string pointedName = "arr[" + string(intStr) + "]";


    //showPointer("pt", pt, pointedName);
    SetConsoleTextAttribute( GetStdHandle( STD_OUTPUT_HANDLE ), 8 );
    cout << setfill(' ') << setw(7) << "pt";
    cout << setw(22 - (pointedName.length() / 2)) << pointedName << endl;
    SetConsoleTextAttribute( GetStdHandle( STD_OUTPUT_HANDLE ), 7 );
    cout << char(201);
    cout << setfill(char(205)) << setw(12) << right << char(187);
    cout << "     " << char(201);
    cout << setw(12) << char(187) << endl;
    cout << char(186) << " ";
    cout << setfill(' ') << setw(10) << left << pt;
    cout << char(186) << "     " << char(186) << " ";
    cout << setfill(' ') << setw(10) << *pt;
    cout <<  char(186) << endl;
    cout << char(204);
    cout << setfill(char(205)) << setw(12) << right << char(185)
            << " --> ";
    cout << char(204);
    cout << setw(12) << char(185) << endl;
    SetConsoleTextAttribute( GetStdHandle( STD_OUTPUT_HANDLE ), 8 );
    cout << char(179);
    cout << setfill(' ') << setw(11) << left << &pt;
    cout << char(179) << "     " << char(179);
    cout << setw(11) << pt;
    cout << char(179) << endl;
    cout << char(192);
    cout << setfill(char(196)) << setw(12) << right << char(217)
            << "     " << char(192);
    cout << setw(12) << char(217) << endl;
    SetConsoleTextAttribute( GetStdHandle( STD_OUTPUT_HANDLE ), 7 );
    //


    cout << "By the pointer you can manipulate an element that you have pointed to:" << endl;

    int newVal = 0;
    SetConsoleTextAttribute( GetStdHandle( STD_OUTPUT_HANDLE ), 1 );
    cout << " | *pt = ";
    cin >> newVal;
    SetConsoleTextAttribute( GetStdHandle( STD_OUTPUT_HANDLE ), 7 );
    *pt = newVal;


    //showPointer("pt", pt, pointedName);
    SetConsoleTextAttribute( GetStdHandle( STD_OUTPUT_HANDLE ), 8 );
    cout << setfill(' ') << setw(7) << "pt";
    cout << setw(22 - (pointedName.length() / 2)) << pointedName << endl;
    SetConsoleTextAttribute( GetStdHandle( STD_OUTPUT_HANDLE ), 7 );
    cout << char(201);
    cout << setfill(char(205)) << setw(12) << right << char(187);
    cout << "     " << char(201);
    cout << setw(12) << char(187) << endl;
    cout << char(186) << " ";
    cout << setfill(' ') << setw(10) << left << pt;
    cout << char(186) << "     " << char(186) << " ";
    cout << setfill(' ') << setw(10) << *pt;
    cout <<  char(186) << endl;
    cout << char(204);
    cout << setfill(char(205)) << setw(12) << right << char(185)
            << " --> ";
    cout << char(204);
    cout << setw(12) << char(185) << endl;
    SetConsoleTextAttribute( GetStdHandle( STD_OUTPUT_HANDLE ), 8 );
    cout << char(179);
    cout << setfill(' ') << setw(11) << left << &pt;
    cout << char(179) << "     " << char(179);
    cout << setw(11) << pt;
    cout << char(179) << endl;
    cout << char(192);
    cout << setfill(char(196)) << setw(12) << right << char(217)
            << "     " << char(192);
    cout << setw(12) << char(217) << endl;
    SetConsoleTextAttribute( GetStdHandle( STD_OUTPUT_HANDLE ), 7 );
    //


    cout << endl << "The updated array: " << endl;
    showArray(arr, n);
    SetConsoleTextAttribute( GetStdHandle( STD_OUTPUT_HANDLE ), 6 );
    cout << "arr[" << arrId << "]: " << arr[arrId] << endl;
    cout << "*pt: " << *pt << endl;
    cout << "&arr[" << arrId << "]: " << &arr[arrId] << endl;
    cout << "pt: " << pt << endl;
    cout << "&pt: " << &pt << endl;
    SetConsoleTextAttribute( GetStdHandle( STD_OUTPUT_HANDLE ), 7 );
    // MENU
    int choice = -1;
    while (true) {
        cout << endl << "What do you want to do next?" << endl
            << "1. Change element to point to" << endl
            << "2. Change value of the pointed element" << endl
            << "0. Exit" << endl;
        cout << "Your choice: ";
        cin >> choice;

        switch(choice) {
            case 0: {
                cout << "Goodbye!" << endl;
                return 0;
            }
            case 1: {
                cout << "Id from the array to point to: ";
                cin >> arrId;
                pt = &arr[arrId];
                SetConsoleTextAttribute( GetStdHandle( STD_OUTPUT_HANDLE ), 1 );
                cout << " | pt = &arr[" << arrId << "];" << endl;
                SetConsoleTextAttribute( GetStdHandle( STD_OUTPUT_HANDLE ), 6 );
                cout << "arr[" << arrId << "]: " << arr[arrId] << endl;
                cout << "*pt: " << *pt << endl;
                cout << "&arr[" << arrId << "]: " << &arr[arrId] << endl;
                cout << "pt: " << pt << endl;
                cout << "&pt: " << &pt << endl;
                SetConsoleTextAttribute( GetStdHandle( STD_OUTPUT_HANDLE ), 7 );
                cout << "You have the pointer: " << endl;
                itoa(arrId, intStr, 10);
                string pointedName = "arr[" + string(intStr) + "]";
                showPointer("pt", pt, pointedName);
                cout << endl;

                SetConsoleTextAttribute( GetStdHandle( STD_OUTPUT_HANDLE ), 1 );
                cout << " | *pt = ";
                cin >> newVal;
                SetConsoleTextAttribute( GetStdHandle( STD_OUTPUT_HANDLE ), 7 );
                *pt = newVal;
                //showPointer("pt", pt, pointedName);
                cout << endl << "The updated array: " << endl;
                showArray(arr, n);
                SetConsoleTextAttribute( GetStdHandle( STD_OUTPUT_HANDLE ), 6 );
                cout << "arr[" << arrId << "]: " << arr[arrId] << endl;
                cout << "*pt: " << *pt << endl;
                cout << "&arr[" << arrId << "]: " << &arr[arrId] << endl;
                cout << "pt: " << pt << endl;
                cout << "&pt: " << &pt << endl;
                SetConsoleTextAttribute( GetStdHandle( STD_OUTPUT_HANDLE ), 7 );
                break;
            }
            case 2: {
                SetConsoleTextAttribute( GetStdHandle( STD_OUTPUT_HANDLE ), 1 );
                cout << " | *pt = ";
                cin >> newVal;
                SetConsoleTextAttribute( GetStdHandle( STD_OUTPUT_HANDLE ), 7 );
                *pt = newVal;
                //showPointer("pt", pt, pointedName);
                cout << endl << "The updated array: " << endl;
                showArray(arr, n);
                SetConsoleTextAttribute( GetStdHandle( STD_OUTPUT_HANDLE ), 6 );
                cout << "arr[" << arrId << "]: " << arr[arrId] << endl;
                cout << "*pt: " << *pt << endl;
                cout << "&arr[" << arrId << "]: " << &arr[arrId] << endl;
                cout << "pt: " << pt << endl;
                cout << "&pt: " << &pt << endl;
                SetConsoleTextAttribute( GetStdHandle( STD_OUTPUT_HANDLE ), 7 );
                break;
            }
            default: cout << "The wrong choice! Try again..." << endl;
        }
    }
    //
    system("PAUSE");
    return 0;
}

void showArray(int *arr, int n) {
    SetConsoleTextAttribute( GetStdHandle( STD_OUTPUT_HANDLE ), 8 );
    for (int i = 0; i < n; i++) {
        cout << "      [" << i << "]     ";
    }
    SetConsoleTextAttribute( GetStdHandle( STD_OUTPUT_HANDLE ), 7 );
    cout << endl;
    for (int i = 0; i < n; i++) {
        cout << char(201);
        cout << setfill(char(205)) << setw(13) << right << char(187);
    }
    cout << endl;
    for (int i = 0; i < n; i++) {
        cout << char(186) << " ";
        cout << setfill(' ') << setw(11) << left << arr[i];
        cout << char(186);
    }
    cout << endl;
    for (int i = 0; i < n; i++) {
        cout << char(204);
        cout << setfill(char(205)) << setw(13) << right << char(185);
    }
    cout << endl;
    SetConsoleTextAttribute( GetStdHandle( STD_OUTPUT_HANDLE ), 8 );
    for (int i = 0; i < n; i++) {
        cout << char(179);
        cout << setfill(' ') << setw(12) << left << &arr[i];
        cout << char(179);
    }
    cout << endl;
    for (int i = 0; i < n; i++) {
        cout << char(192);
        cout << setfill(char(196)) << setw(13) << right << char(217);
    }
    SetConsoleTextAttribute( GetStdHandle( STD_OUTPUT_HANDLE ), 7 );
    cout << endl;
}

void showPointer(string name, int* var, string aimName) {
    SetConsoleTextAttribute( GetStdHandle( STD_OUTPUT_HANDLE ), 8 );
    cout << setfill(' ') << setw(6 + (name.length() / 2)) << name;
    cout << setw(22 - (name.length() / 2)) << aimName << endl;
    SetConsoleTextAttribute( GetStdHandle( STD_OUTPUT_HANDLE ), 7 );
    cout << char(201);
    cout << setfill(char(205)) << setw(12) << right << char(187);
    cout << "     " << char(201);
    cout << setw(12) << char(187) << endl;
    cout << char(186) << " ";
    cout << setfill(' ') << setw(10) << left << var;
    cout << char(186) << "     " << char(186) << " ";
    cout << setfill(' ') << setw(10) << *var;
    cout <<  char(186) << endl;
    cout << char(204);
    cout << setfill(char(205)) << setw(12) << right << char(185)
            << " --> ";
    cout << char(204);
    cout << setw(12) << char(185) << endl;
    SetConsoleTextAttribute( GetStdHandle( STD_OUTPUT_HANDLE ), 8 );
    cout << char(179);
    cout << setfill(' ') << setw(11) << left << &var;
    cout << char(179) << "     " << char(179);
    cout << setw(11) << var;
    cout << char(179) << endl;
    cout << char(192);
    cout << setfill(char(196)) << setw(12) << right << char(217)
            << "     " << char(192);
    cout << setw(12) << char(217) << endl;
    SetConsoleTextAttribute( GetStdHandle( STD_OUTPUT_HANDLE ), 7 );
}

