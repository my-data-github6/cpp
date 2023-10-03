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

    void accept()
    {
        cout << "Enter Day: \t";
        cin >> this->day;
        cout << "Enter Month: \t";
        cin >> this->month;
        cout << "Enter Year: \t";
        cin >> this->year;
    }

    void display()
    {
        cout << "Date: \t" << this->day << "/" << this->month << "/" << this->year << endl;
    }

    bool is_leap_year()
    {
        if (((this->year % 4 == 0) && (this->year % 100 != 0)) || this->year % 400 == 0)
            return true;
        return false;
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

    Person(string name, string addr, Date birth_date) : birth_date(birth_date)
    {
        this->name = name;
        this->addr = addr;
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

    void accept()
    {
        cout << "Enter Person Name: \t";
        cin >> this->name;
        cout << "Enter Address: \t";
        cin >> this->addr;
        cout << "Enter Birth Date: \t" << endl;
        birth_date.accept();
    }

    void display()
    {
        cout << "Name: \t" << this->name << endl;
        cout << "Address: \t" << this->addr << endl;
        cout << "Birth Date: \t";
        birth_date.display();
        cout << endl;
    }
};

class Employee : public Person
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

    Employee(string name, string addr, Date birth_date, int id, float sal, string dept, Date joining) : joining(joining)
    {
        this->set_name(name);
        this->set_addr(addr);
        this->set_birth_date(birth_date);
        this->id = id;
        this->sal = sal;
        this->dept = dept;
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

    void accept()
    {
        cout << "Enter Employee ID: \t";
        cin >> this->id;
        Person::accept();
        cout << "Enter Salary: \t";
        cin >> this->sal;
        cout << "Enter Department: \t";
        cin >> this->dept;
        cout << "Enter Date of joining \t" << endl;
        joining.accept();
    }

    void display()
    {
        cout << "----------EMPLOYEE DETAILS" << endl;
        cout << "Employee ID: \t" << this->id << endl;
        Person::display();
        cout << "Employee salary: \t" << this->sal << endl;
        cout << "Employee Department: \t" << this->dept << endl;
        cout << "Employee Date of Joining: \t";
        joining.display();
        cout << endl;
    }
};

int main()
{
    Employee Emp1("Rohit", "Sunbeam", Date(28, 04, 2000), 101, 2000, "Service", Date(29, 05, 2001));
    // Emp1.accept();
    // Emp1.display();

    // Emp1.set_sal(555);
    // cout<<Emp1.get_sal();
    // Emp1.set_id(44);
    // cout<<Emp1.get_id();
    // Emp1.set_dept("Bank");
    // cout<<Emp1.get_dept();
    // Emp1.set_joining_date(Date(29, 9, 2023));
    // Emp1.get_joining_date().display();

    // Emp1.set_name("Shhhh");
    // Emp1.get_name();
    // Emp1.set_addr("Sohohoho zsdsds");
    // Emp1.get_addr();
    // Emp1.set_birth_date(Date(31,31,3131));
    // Emp1.get_birth_date().display();

    // Date d1;
    // d1.set_year(2022);
    // Emp1.set_joining_date(d1);
    // cout<<Emp1.get_joining_date().get_year();
    // Emp1.display();

    // Emp1.get_joining_date().set_year(258);
    Date d1(27, 05, 1995);
    Emp1.set_joining_date(d1);
    d1.set_year(5050);
    Emp1.set_joining_date(d1);
    Emp1.get_joining_date().display();
    return 0;
}