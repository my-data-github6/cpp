#include <iostream>
using namespace std;

class Employee
{
private:
    int id;
    float sal;

public:
    Employee()
    {
        cout << "Inside EMPLOYEE PARAMETERLESS constructor." << endl;
        this->id = 0;
        this->sal = 0;
    }

    Employee(int id, float sal)
    {
        cout << "Inside EMPLOYEE PARAMETERIZED constructor." << endl;
        this->id = id;
        this->sal = sal;
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

    void accept()
    {
        cout << "Enter Employee ID: \t" << endl;
        cin >> this->id;
        cout << "Enter Employee Salary: \t" << endl;
        cin >> this->sal;
    }

    void display()
    {
        cout << "Employee ID: \t" << this->id << endl;
        cout << "Employee Salary: \t" << this->sal << endl;
    }
};

class Manager : virtual public Employee
{
private:
    float bonus;

public:
    Manager()
    {
        cout << "Inside MANAGER PARAMETERLESS constructor." << endl;
        this->bonus = 0;
    }

    Manager(int id, float sal, float bonus)
    {
        cout << "Inside MANAGER PARAMETERIZED constructor." << endl;
        this->set_id(id);
        this->set_sal(sal);
        this->bonus = bonus;
    }

    float get_bonus()
    {
        return this->bonus;
    }

    void set_bonus(float bonus)
    {
        this->bonus = bonus;
    }

    void accept()
    {
        Employee::accept();
        cout << "Enter Bonus: \t";
        cin >> this->bonus;
    }

    void display()
    {
        Employee::display();
        cout << "Bonus: \t" << this->bonus << endl;
    }

protected:
    void accept_manager()
    {
        cout << "Enter Bonus: \t";
        cin >> this->bonus;
    }

    void display_manager()
    {
        cout << "Bonus: \t" << this->bonus << endl;
    }
};

class Salesman : virtual public Employee
{
private:
    float comm;

public:
    Salesman()
    {
        cout << "Inside SALESMAN PARAMETERLESS constructor." << endl;
        this->comm = 0;
    }

    Salesman(int id, float sal, float comm)
    {
        cout << "Inside SALESMAN PARAMETERIZED constructor." << endl;
        this->set_id(id);
        this->set_sal(sal);
        this->comm = comm;
    }

    float get_comm()
    {
        return this->comm;
    }

    void set_comm(float comm)
    {
        this->comm = comm;
    }

    void accept()
    {
        Employee::accept();
        cout << "Enter Commission: \t";
        cin >> this->comm;
    }

    void display()
    {
        Employee::display();
        cout << "Commission: \t" << this->comm << endl;
    }

protected:
    void accept_salesman()
    {
        cout << "Enter Commission: \t";
        cin >> this->comm;
    }

    void display_salesman()
    {
        cout << "Commission: \t" << this->comm << endl;
    }
};

class Sales_manager : public Manager, public Salesman
{
public:
    Sales_manager()
    {
        cout << "Inside SALES_MANAGER PARAMETERLESS constructor." << endl;
    }

    Sales_manager(int id, float sal, float bonus, float comm)
    {
        cout << "Inside SALES_MANAGER PARAMETERIZED constructor." << endl;
        this->set_id(id);
        this->set_sal(sal);
        this->set_bonus(bonus);
        this->set_comm(comm);
    }

    void accept()
    {
        Employee::accept();
        Manager::accept_manager();
        Salesman::accept_salesman();
    }

    void display()
    {
        Employee::display();
        Manager::display_manager();
        Salesman::display_salesman();
    }
};

int main()
{
    Sales_manager sm1;
    cout << "Display Default" << endl;
    sm1.display();
    cout << "Accept Values:----------" << endl;
    sm1.accept();
    cout << "Display Values:---------" << endl;
    sm1.display();

    cout << "****************************" << endl;
    Sales_manager sm2(101, 2000, 500, 250);
    cout << "Display Default" << endl;
    sm2.display();
    cout << "Accept Values:----------" << endl;
    sm2.accept();
    cout << "Display Values:---------" << endl;
    sm2.display();

    return 0;
}