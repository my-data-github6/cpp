#include <iostream>
using namespace std;

class Student
{
private:
    string name;
    string gender;
    int rollno;
    int marks[3];

public:
    Student()
    {
        this->name = "";
        this->gender = "";
        this->rollno = 0;
        this->marks[0] = 0;
        this->marks[1] = 0;
        this->marks[2] = 0;
    }

    void accept()
    {
        cout << "Enter Name of Student: \t";
        cin >> this->name;
        cout << "Enter Gender: \t";
        cin >> this->gender;
        cout << "Enter Roll No.: \t";
        cin >> this->rollno;
        for (int i = 0; i < 3; i++)
        {
            cout << "Enter marks of Subject " << i + 1 << " \t";
            cin >> this->marks[i];
        }
    }

    void print()
    {
        double percentage = (marks[0] + marks[1] + marks[2]) / 3;
        cout << "Student's Name: \t" << this->name << endl;
        cout << "Roll No.: \t" << this->rollno << endl;
        cout << "Gender: \t" << this->gender << endl;
        cout << "Percentage: \t" << percentage << endl
             << endl;
    }

    friend void sortRecords(Student *arr[], int size);
    friend int searchRecords(Student *arr[], int size);
};

void sortRecords(Student *arr[], int size)
{
    cout << "--------------SORTING--------------" << endl;
    Student *temp;
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size - 1; j++)
        {
            if (arr[j]->rollno > arr[j + 1]->rollno)
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    cout << "Sorted" << endl;
}

int searchRecords(Student *arr[], int size)
{
    int rollno;
    cout << "--------------SEARCHING--------------" << endl;
    cout << "Enter Roll no. of Student: \t";
    cin >> rollno;
    for (int i = 0; i < size; i++)
        if (arr[i]->rollno == rollno)
            return i + 1;
    return -1;
}

enum Emenu
{
    EXIT,
    ACCEPT_DATA,
    PRINT_DATA,
    SORT_DATA,
    SEARCH_DATA
};

Emenu menu()
{
    int choice;
    cout << "----------------------------" << endl;
    cout << "Enter Your Choice: " << endl;
    cout << "0. Exit" << endl;
    cout << "1. Fill Data" << endl;
    cout << "2. Show Data" << endl;
    cout << "3. Sort Data" << endl;
    cout << "4. Search Data" << endl;
    cout << "----------------------------" << endl;
    cin >> choice;
    return Emenu(choice);
}

int main()
{
    int size, choice;
    cout << "Enter no. of objects: \t";
    cin >> size;

    Student **Stud = new Student *[size];
    for (int i = 0; i < size; i++)
        Stud[i] = new Student;

    while ((choice = menu()) != EXIT)
    {
        switch (choice)
        {
        case ACCEPT_DATA:
            for (int i = 0; i < size; i++)
            {
                cout << "Enter Details for Student " << i + 1 << endl;
                Stud[i]->accept();
                cout << endl;
            }
            break;

        case PRINT_DATA:
            for (int i = 0; i < size; i++)
            {
                cout << "Details of Student No. " << i + 1 << endl;
                Stud[i]->print();
            }
            break;

        case SORT_DATA:
            sortRecords(Stud, size);
            break;

        case SEARCH_DATA:
            int index = searchRecords(Stud, size);
            cout << "Found at: \t" << index << endl;
            break;
        }
    }

    for (int i = 0; i < size; i++)
        delete Stud[i];
    delete[] Stud;

    return 0;
}