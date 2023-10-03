#include <iostream>
using namespace std;

class Shopping
{
private:
    int id;
    string title;
    float price;

public:
    virtual void accept()
    {
        cout << "Enter Product id: \t";
        cin >> this->id;
        cout << "Enter Product Title: \t";
        cin >> this->title;
        cout << "Enter Product Price: \t";
        cin >> this->price;
    }

    virtual void check() = 0;

    float get_price()
    {
        return this->price;
    }

    void set_price(float price)
    {
        this->price = price;
    }

    int get_id()
    {
        return this->id;
    }

    void set_id(int id)
    {
        this->id = id;
    }

    string get_title()
    {
        return this->title;
    }

    void set_title(string title)
    {
        this->title = title;
    }
};

class Book : public Shopping
{
private:
    string author;

public:
    // Book(int id, string title, float price, string author)
    // {
    //     this->author = author;
    //     this->set_id(id);
    //     this->set_title(title);
    //     this->set_price(price);
    // }

    void accept()
    {
        cout << "*****Enter Book Details*****" << endl;
        Shopping::accept();
        cout << "Enter Author's Name: \t";
        cin >> this->author;
    }

    void check()
    {
        set_price(0.9 * get_price());
    }
};

class Tape : public Shopping
{
private:
    string artist;

public:
    // Tape(int id, string title, float price, string artist)
    // {
    //     this->artist = artist;
    //     this->set_id(id);
    //     this->set_title(title);
    //     this->set_price(price);
    // }

    void accept()
    {
        cout << "*****Enter Book Details*****" << endl;
        Shopping::accept();
        cout << "Enter Artist's Name: \t";
        cin >> this->artist;
    }

    void check()
    {
        set_price(0.95 * get_price());
    }
};

int menu()
{
    int choice;
    cout << "----------------------" << endl;
    cout << "Enter Your Choice: " << endl;
    cout << "0. Exit" << endl;
    cout << "1. Wanna Purchase Book" << endl;
    cout << "2. Wanna Purchase Tape" << endl;
    cout << "3. Show Items in Cart" << endl;
    cout << "4. Show Bill please" << endl;
    cout << "----------------------" << endl;
    cin >> choice;
    return choice;
}

int main()
{
    int choice;
    Shopping *cart[3];
    int index = 0;
    float bill;
    while ((choice = menu()) != 0)
    {
        switch (choice)
        {
        case 1:
            if (index < 3)
            {
                cart[index] = new Book();
                cart[index]->accept();
                cart[index]->check();
                index++;
            }
            else
                cout << "Cart is Full. Can't add another Book." << endl;
            break;

        case 2:
            if (index < 3)
            {
                cart[index] = new Tape();
                cart[index]->accept();
                cart[index]->check();
                index++;
            }
            else
                cout << "Cart is Full. Can't add another Tape." << endl;
            break;

        case 3:
            for (int i = 0; i < index; i++)
            {
                cout << i + 1 << ". " << cart[i]->get_title() << " for Rs." << cart[i]->get_price() << endl;
            }
            break;

        case 4:
            bill = 0;
            for (int i = 0; i < index; i++)
                bill = bill + cart[i]->get_price();
            cout << "Total Bill: \t" << bill << endl;
            break;

        default:
            cout << "Invalid choice Entered.....(" << endl;
        }
    }
    for (int i = 0; i < 3; i++)
        delete cart[i];

    cout << "THANK YOU!!!\nVISIT AGAIN." << endl;
    return 0;
}