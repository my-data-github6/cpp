#include "./cylinder.h"
#include "./menu.h"
int main()
{
    int choice;
    double rad,hei;
    Cylinder a;
    while ((choice=(menu()))!=EXIT)
    {
     switch (choice)
     {
     case ENTER_RADIUS:
         cout<<"Enter radius:"<<endl;
         cin>>rad;
         a.setRadius(rad);
         break;
     case ENTER_HEIGHT:
        cout<<"Enter height"<<endl;
        cin>>hei;
        a.setHeight(hei);
        break;
     case CALCULATE_VOLUME:
        a.printVolume();
        break;
              
           
     
     default:
        break;
     }

    }
    
   return 0; 
}

