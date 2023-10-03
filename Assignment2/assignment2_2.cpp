#include<iostream>
using namespace std;

class address
{
 private:
 string building;
 string street;
 string city;
 int pin;

public:
address()
{
building="matruchaya";
street="knwar nagar";
city="Amravati";
pin=444606;
}

address(string a,string b,string c,int d)
{
building=a;
street=b;
city=c;
pin=d;
}
void accept()
{
    cout<<"Enter the Building"<<endl;
    cin>>building;
    cout<<"Enter the street"<<endl;
    cin>>street;
    cout<<"Enter the city"<<endl;
    cin>>city;
    cout<<"Enter the PIN"<<endl;
    cin>>pin;
    
}
void printdata()
{
    cout<<"Building:\n"<<building<<"\nStreet:\n"<<street<<"\nCity:\n"<<city<<"\nPIN:\n"<<pin<<endl;
}
string getCity()
{
   return city;     
}
string getStreet()
{
   return street;     
}
string getBuilding()
{
   return building;     
}
int getPIN()
{
   return pin;     
}
void setCity(string c)
{
  city=c ;     
}
void setStreet(string st)
{
   street=st;     
}
void setBuilding(string bu)
{
   building=bu;     
}
void setPIN(int pi)
{
   pin =pi;     
}


};
int main ()
{
    address a;
    cout<<"Default counstructor values"<<endl;
    a.printdata();
    cout<<"-----------------------------------"<<endl;
    address aa("matruchaya","knwar nagar","Amravati",444606);
    cout<<"Parameterize counstructor values"<<endl;
    a.printdata();
    cout<<"-----------------------------------"<<endl;
    cout<<"Before accept function"<<endl;
    a.printdata();
    a.accept();
    cout<<"After accept function"<<endl;
    a.printdata();
    cout<<"-----------------------------------"<<endl;
    cout<<"Mutator inspectors testing!!"<<endl;
    a.setBuilding("Sunbeam");
    cout<<a.getBuilding()<<endl;
    a.setStreet("shaniwaarpeth");
    cout<<a.getStreet()<<endl;
    a.setCity("Karad");
    cout<<a.getCity()<<endl;
    a.setPIN(444606);
    cout<<a.getPIN()<<endl;
    cout<<"Mutator inspectors testing ended!!"<<endl;

    return 0;
}