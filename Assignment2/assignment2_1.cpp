#include<iostream>
using namespace std;
namespace Nstudent
{
    class student
{
    public:
    int rollno;
    string name;
    int marks;

    void initstudent()
    {
     rollno=100;
     name ="rutvik";
     marks=100;
    }
    void acceptstudent()
    {
    cout<<"Enter rollno of student:\n"<<endl;
    cin>>rollno;
    cout<<"Enter name of student:"<<endl;
    cin>>name;
    cout<<"Enter the marks"<<endl;
    cin>>marks;
    }
    void prindata()
    {
     cout<<"Rollno:"<<rollno<<"\nName:"<<name<<"\nMarks:"<<marks<<endl;   
    }

};
}
using namespace Nstudent;
int main()
{
    student r;
    int choice;
    do
    {
      cout<<"Enter the choice"<<endl;
      cout<<"select\n 1.Initiallizing student\n 2.Add student data\n 3.printstudent"<<endl;
      cin>>choice;
      switch (choice)
      {
      case 1:
        r.initstudent();
        break;
      case 2:
         r.acceptstudent();
         break;
      case 3:
         r.prindata();
         break;   
      default:
        break;
      }
    } while (choice!=0);
    return 0;
}

