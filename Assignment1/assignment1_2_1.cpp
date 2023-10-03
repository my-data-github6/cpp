#include<iostream>
using namespace std;

class date
{
    public:
    int day;
    int month;
    int year;

void acceptdate()
 {
  cout<<"Enter the day:\n"<< endl;
  cin>>day;
  cout<<"Enter the Month:\n"<<endl;
  cin>>month;
  cout<<"Enter the year:\n"<<endl;
  cin>>year;
 }
 
 void printdate()
 {
  cout<<"dd:MM:Year="<<day<<":"<<month<<":"<<year<<endl;
 }
 void intidate()
 {
    day=15;
    month=03;
    year=2000;
 }
 bool isleapyear()
 {
    if (year%4==0 && year%100!=0 || year%400==0)
        {
            /*printdate();
            printf("Year is leap year\n");*/
            return true;
        }
        else
        {
        /*printf("Year is not leap year\n");*/
        return false;
        }
 }
};
 
 int main()
 {
    date a;
    int choice;
    bool check;
    do
    {
     cout<<"Enter your choice:\n"<<endl;
     cout<<"select \n 1.Add date \n 2.Show date\n 3.InitDate\n 4.Check year is leap year or not\n 0.Exit\n"<<endl;
     cin>>choice;
     switch (choice)
     {
     case 1:
        a.acceptdate();
        //printdate(a);
        break;
     case 2:
        //intidate(&a);
        a.printdate();
        break;
     case 3:
        a.intidate();
        //printf("Date initialization is successfull!!\n");
        a.printdate();
        break;
     case 4:
        check=a.isleapyear();
        if (check)
        {
         cout<<"Year is leap year\n"<<endl;   
        }
        else
        {
         cout<<"Year is not leap year\n"<<endl; 
        }
        
        break;

     default:
        break;
     }  
        
    } while (choice!=0);
    return 0;
 }


 