#include<iostream>

struct date
{
    int day;
    int month;
    int year;

void acceptdate()
 {
  printf("Enter the day:\n");
  scanf("%d",&day);
  printf("Enter the Month:\n");
  scanf("%d",&month);
  printf("Enter the year:\n");
  scanf("%d",&year);
 }
 
 void printdate()
 {
  printf("dd:MM:Year=%d:%d:%d\n",day,month,year);
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
    struct date a;
    int choice;
    bool check;
    do
    {
     printf("Enter your choice:\n");
     printf("select \n 1.Add date \n 2.Show date\n 3.InitDate\n 4.Check year is leap year or not\n 0.Exit\n");
     scanf("%d",&choice);
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
         printf("Year is leap year\n");   
        }
        else
        {
         printf("Year is not leap year\n"); 
        }
        
        break;

     default:
        break;
     }  
        
    } while (choice!=0);
    return 0;
 }


 