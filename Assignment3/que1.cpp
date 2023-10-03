#include<iostream>
using namespace std;
class VolumeOfBox
{
  private:
  float length,width,height;
  public:
  VolumeOfBox()
  {
    length=1;
    width=1;
    height=1;
  }
  void acceptData()
  {
    cout<<"enter length:"<<endl;
    cin>>length;
    cout<<"enter width:"<<endl;
    cin>>width;
    cout<<"enter height:"<<endl;
    cin>>height;
  }
  void PrintData()
  {
  cout<<"lenght:"<<length<<endl;
  cout<<"Widhth:"<<width<<endl;
  cout<<"Height:"<<height<<endl;
  cout<<"Volume is"<<CalVol()<<endl;
  }
  float CalVol()
  {
    return length*width*height;
  }
};

int main()
{
    VolumeOfBox x;
    int choice;
    do
    {
     cout<<"select"<<endl;
     cout<<"1.for giving values"<<endl;
     cout<<"2.For calculating volume of box"<<endl;
     cout<<"3.Printing data"<<endl;
     cin>>choice;
     
     switch (choice)
     {
     case 1:
         x.acceptData();
        break;
     case 2:
        x.CalVol();
        break;
     case 3:
        x.PrintData();
        break;
     
     default:
        break;
     }
    } while (choice!=0);
    
    return 0;
}