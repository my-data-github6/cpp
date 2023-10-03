#include<iostream>
using namespace std;
class tollbooth
{
  private:
  unsigned int CountTotalCars;
  double amount;
  public:
  tollbooth()
  {
    CountTotalCars=0;
    amount=0.0;
  }
  void PayingCar()
  {
    CountTotalCars=CountTotalCars+1;
    amount=amount+0.50;
  }
  void NoPayCar()
  {
    CountTotalCars=CountTotalCars+1;
  }
  void printonConsole()
  {
    cout<<"----------------------------------------------------------------------------"<<endl;
    cout<<"Total cars cross the toll:"<<CountTotalCars<<endl;;
    cout<<"Total toll recieved:"<<amount<<endl;
    cout<<"total paid cars:"<<amount/0.5<<endl;
    cout<<"total of unpaid cars"<<CountTotalCars-(amount/0.5)<<endl;
    
  }


};
int main()
{
    tollbooth a;
    int choice;
     do
     {
       cout<<"----------------------------------------------------------------------------"<<endl;
       cout<<"1.car goes paying the toll"<<endl;
       cout<<"2.car goes without paying the toll"<<endl;
       cout<<"3.Details of whole day"<<endl;
       cout<<"0.Exit"<<endl;
       cin>>choice;
       switch (choice)
       {
       case 1:
          a.PayingCar();    
          break;
       case 2:
          a.NoPayCar();
         break;
        case 3:
          a.printonConsole();
          break; 

        default:
        break;
       }

        
     } while (choice!=0);
     

    return 0;
}