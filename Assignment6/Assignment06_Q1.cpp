#include <iostream>
using namespace std;

class Date
{
private:
    int day;
    int month;
    int year;

public:
    Date()
    {
        this->day = 0;
        this->month = 0;
        this->year = 0;
    }

    Date(int day, int month, int year)
    {
        this->day = day;
        this->month = month;
        this->year = year;
    }

    void acceptDate()
    {
        cout << "----------FILL DATE DETAILS" << endl;
        cout << "Enter Day: \t";
        cin >> this->day;
        cout << "Enter Month: \t";
        cin >> this->month;
        cout << "Enter Year: \t";
        cin >> this->year;
    }

    void displayDate()
    {
        cout << "Date: \t" << this->day << "/" << this->month << "/" << this->year << endl;
    }

    int get_day()
    {
        return this->day;
    }

    void set_day(int day)
    {
        this->day = day;
    }

    int get_month()
    {
        return this->month;
    }

    void set_month(int month)
    {
        this->month = month;
    }

    int get_year()
    {
        return this->year;
    }

    void set_year(int year)
    {
        this->year = year;
    }

    bool is_leap_year()
    {
        if (((this->year % 4 == 0) && (this->year % 100 != 0)) || this->year % 400 == 0)
            return true;
        return false;
    }
};

class Employee
{
private:
    int id;
    float sal;
    string dept;
    Date joining;

public:
    Employee()
    {
        this->id = 0;
        this->sal = 0;
        this->dept = " ";
    }

    Employee(int id, float sal, string dept, int day, int month, int year) : joining(day, month, year)
    {
        this->id = id;
        this->sal = sal;
        this->dept = dept;
    }

    void acceptEmployee()
    {
        cout << "----------FILL EMPLOYEE DETAILS" << endl;
        cout << "Enter Employee ID: \t";
        cin >> this->id;
        cout << "Enter Salary: \t";
        cin >> this->sal;
        cout << "Enter Department: \t";
        cin >> this->dept;
        cout << "Enter Date of joining \t";
        joining.acceptDate();
    }

    void displayEmployee()
    {
        cout << "----------EMPLOYEE DETAILS" << endl;
        cout << "Employee ID: \t" << this->id << endl;
        cout << "Employee salary: \t" << this->sal << endl;
        cout << "Employee Department: \t" << this->dept << endl;
        cout << "Employee Date of Joining: \t";
        joining.displayDate();
        cout << endl;
    }

    int get_id()
    {
        return this->id;
    }

    void set_id(int id)
    {
        this->id = id;
    }

    float get_sal()
    {
        return this->sal;
    }

    void set_sal(float sal)
    {
        this->sal = sal;
    }

    string get_dept()
    {
        return this->dept;
    }

    void set_dept(string dept)
    {
        this->dept = dept;
    }

    Date get_joining_date()
    {
        return this->joining;
    }

    void set_joining_date(Date dt)
    {
        this->joining = dt;
    }
};

class Person
{
private:
    string name;
    string addr;
    Date birth_date;

public:
    Person()
    {
        this->name = " ";
        this->addr = " ";
    }

    Person(string name, string addr, int day, int month, int year) : birth_date(day, month, year)
    {
        this->name = name;
        this->addr = addr;
    }

    void acceptPerson()
    {
        cout << "----------FILL PERSON DETAILS" << endl;
        cout << "Enter Person Name: \t";
        cin >> this->name;
        cout << "Enter Address: \t";
        cin >> this->addr;
        cout << "Enter Birth Date; \t";
        birth_date.acceptDate();
    }

    void displayPerson()
    {
        cout << "----------PERSON DETAILS" << endl;
        cout << "Name: \t" << this->name << endl;
        cout << "Address: \t" << this->addr << endl;
        cout << "Birth Date: \t";
        birth_date.displayDate();
        cout << endl;
    }

    string get_name()
    {
        return this->name;
    }

    void set_name(string name)
    {
        this->name = name;
    }

    string get_addr()
    {
        return this->addr;
    }

    void set_addr(string addr)
    {
        this->addr = addr;
    }

    Date get_birth_date()
    {
        return this->birth_date;
    }

    void set_birth_date(Date dt)
    {
        this->birth_date = dt;
    }
};

int main()
{
    Employee Emp1;
    Emp1.displayEmployee();
    Employee Emp2(101, 2000, "Acounting", 15, 9, 2000);
    Emp2.displayEmployee();
    Emp2.acceptEmployee();
    Emp2.displayEmployee();

    Person P1;
    P1.displayPerson();
    Person P2("Abc", "Sunbeam", 8, 9, 2023);
    P2.displayPerson();
    P2.acceptPerson();
    P2.displayPerson();
    return 0;
}