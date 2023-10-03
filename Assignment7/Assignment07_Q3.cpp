#include <iostream>
using namespace std;

class Employee
{
private:
    int id;
    float sal;
    string designation;

public:
    Employee()
    {
        // cout << "Inside EMPLOYEE PARAMETERLESS constructor." << endl;
        this->id = 0;
        this->sal = 0;
    }

    Employee(int id, float sal)
    {
        // cout << "Inside EMPLOYEE PARAMETERIZED constructor." << endl;
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

    string get_designation()
    {
        return this->designation;
    }

    void set_designation(string designation)
    {
        this->designation = designation;
    }

    virtual void accept()
    {
        cout << "Enter Employee ID: \t" << endl;
        cin >> this->id;
        cout << "Enter Employee Salary: \t" << endl;
        cin >> this->sal;
    }

    virtual void display()
    {
        cout << "Employee ID: \t" << this->id << endl;
        cout << "Employee Salary: \t" << this->sal << endl;
    }
    virtual ~Employee()
    {
    }
};

class Manager : virtual public Employee
{
private:
    float bonus;

public:
    Manager()
    {
        // cout << "Inside MANAGER PARAMETERLESS constructor." << endl;
        this->bonus = 0;
        this->set_designation("Manager");
    }

    Manager(int id, float sal, float bonus)
    {
        // cout << "Inside MANAGER PARAMETERIZED constructor." << endl;
        this->set_id(id);
        this->set_sal(sal);
        this->bonus = bonus;
        this->set_designation("Manager");
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
    virtual ~Manager()
    {
    }
};

class Salesman : virtual public Employee
{
private:
    float comm;

public:
    Salesman()
    {
        // cout << "Inside SALESMAN PARAMETERLESS constructor." << endl;
        this->comm = 0;
        this->set_designation("Salesman");
    }

    Salesman(int id, float sal, float comm)
    {
        // cout << "Inside SALESMAN PARAMETERIZED constructor." << endl;
        this->set_id(id);
        this->set_sal(sal);
        this->comm = comm;
        this->set_designation("Salesman");
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
    virtual ~Salesman()
    {
    }
};

class Sales_manager : public Manager, public Salesman
{
public:
    Sales_manager()
    {
        // cout << "Inside SALES_MANAGER PARAMETERLESS constructor." << endl;
        this->set_designation("Sales_manager");
    }

    Sales_manager(int id, float sal, float bonus, float comm)
    {
        // cout << "Inside SALES_MANAGER PARAMETERIZED constructor." << endl;
        this->set_id(id);
        this->set_sal(sal);
        this->set_bonus(bonus);
        this->set_comm(comm);
        this->set_designation("Sales_manager");
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
    virtual ~Sales_manager()
    {
    }
};

int menu2()
{
    int choice;
    cout << endl;
    cout << "Choose Designation:" << endl;
    cout << "0. Exit" << endl;
    cout << "1. Manager" << endl;
    cout << "2. Salesman" << endl;
    cout << "3. Sales_manager" << endl;
    cin >> choice;
    return choice;
}

int menu1()
{
    int choice;
    cout << "---------------------" << endl;
    cout << "Enter Your Choice:" << endl;
    cout << "0. Exit" << endl;
    cout << "1. Accept Employee" << endl;
    cout << "2. Select count(*) from Employee group by designation" << endl;
    cout << "3. Select ename from Employee group by designation" << endl;
    cout << "---------------------" << endl;
    cin >> choice;
    return choice;
}

int main()
{
    int choice1, choice2, choice3, index = 0, mgr_count = 0, sl_count = 0, slmgr_count = 0;
    Employee *arr[5];
    while ((choice1 = menu1()) != 0)
    {
        switch (choice1)
        {
        case 1:
            while ((choice2 = menu2()) != 0)
            {
                switch (choice2)
                {
                case 1:
                    if (index < 5)
                    {
                        arr[index] = new Manager();
                        arr[index]->accept();
                        mgr_count++;
                        index++;
                    }
                    else
                    {
                        cout << "HouseFull. No Need of Another Manager." << endl;
                    }
                    break;

                case 2:
                    if (index < 5)
                    {
                        arr[index] = new Salesman();
                        arr[index]->accept();
                        sl_count++;
                        index++;
                    }
                    else
                    {
                        cout << "HouseFull. No Need of Another Salesman." << endl;
                    }
                    break;

                case 3:
                    if (index < 5)
                    {
                        arr[index] = new Sales_manager();
                        arr[index]->accept();
                        slmgr_count++;
                        index++;
                    }
                    else
                    {
                        cout << "HouseFull. No Need of Another Sales_Manager." << endl;
                    }
                    break;

                default:
                    cout << "Invalid Choice Entered...:(" << endl;
                    break;
                }
            }
            break;
        case 2:
            cout << "Count of Manager ::" << mgr_count << endl;
            cout << "Count of Salesman ::" << sl_count << endl;
            cout << "Count of SalesManager ::" << slmgr_count << endl;
            break;
        case 3:
            while ((choice3 = menu2()) != 0)
            {
                switch (choice3)
                {
                case 1:
                    for (int i = 0; i < index; i++)
                    {
                        if (arr[i]->get_designation() == "Manager")
                        {
                            arr[i]->display();
                        }
                    }
                    break;

                case 2:
                    for (int i = 0; i < index; i++)
                    {
                        if (arr[i]->get_designation() == "Salesman")
                        {
                            arr[i]->display();
                        }
                    }
                    break;

                case 3:
                    for (int i = 0; i < index; i++)
                    {
                        if (arr[i]->get_designation() == "Sales_manager")
                        {
                            arr[i]->display();
                        }
                        cout << endl;
                    }
                    break;
                default:
                    cout << "Invalid Choice Entered...:(" << endl;
                    break;
                }
            }
            break;
        default:
            cout << "Invalid Choice Entered...:(" << endl;
            break;
        }
    }

    for (int i = 0; i < index; i++)
        delete arr[i];
    return 0;
}