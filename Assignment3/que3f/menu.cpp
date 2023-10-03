#include "./menu.h"
#include <iostream>
using namespace std;

Emenu menu()
{
    int choice;
    cout << "*******************" << endl;
    cout << "0. EXIT" << endl;
    cout << "1.Enter radius"<<endl;
    cout << "2. Enter height" << endl;
    cout << "3. Calculate volume" << endl;
    cout << "Enter your choice = "<<endl;
    cin >> choice;
    cout << "*******************" << endl;
    return Emenu(choice);
}