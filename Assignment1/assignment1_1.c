#include<stdio.h>
struct date
{
    int day;
    int month;
    int year;
};
 void acceptdate(struct date *f);
 void printdate(struct date v);
 void intidate(struct date *b);
 int main()
 {
    struct date a;
    int choice;
    do
    {
     printf("Enter your choice:\n");
     printf("select \n 1.Add date \n 2.Show date\n 3.InitDate\n 0.Exit\n");
     scanf("%d",&choice);
     switch (choice)
     {
     case 1:
        acceptdate(&a);
        //printdate(a);
        break;
     case 2:
        //intidate(&a);
        printdate(a);
        break;
     case 3:
        intidate(&a);
        //printf("Date initialization is successfull!!\n");
        printdate(a);

     default:
        break;
     }  
        
    } while (choice!=0);
    return 0;
 }

 void acceptdate(struct date *f)
 {
  printf("Enter the day:\n");
  scanf("%d",&f->day);
  printf("Enter the Month:\n");
  scanf("%d",&f->month);
  printf("Enter the year:\n");
  scanf("%d",&f->year);
 }
 void printdate(struct date v)
 {
  printf("dd:MM:Year=%d:%d:%d\n",v.day,v.month,v.year);
 }
 void intidate(struct date *b)
 {
    b->day=15;
    b->month=03;
    b->year=2000;
 }

 