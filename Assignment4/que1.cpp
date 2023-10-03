#include<iostream>
using namespace std;

class Time
{
private:
    int h;
    int m;
    int s;
public:
    Time()
    {
        h=10;
        m=10;
        s=10;
    }
    Time(int hr,int min,int sec)
    {
        h=hr;
        m=min;
        s=sec;
    }
    void PrintTime()
    {
        cout<<"Hour:"<<h<<"\n Min:"<<m<<"\n Sec:"<<s<<endl;
    }

    int getHour()
    {
      return h;
    }
    int getMinute()
    {
      return m;
    }
    int getSeconds()
    {
      return s;
    }
    void setHour(int hr)
    {
     h=hr;
    }
    void setMinute(int min)
    {
     m=min;
    }
    void setSeconds(int sec)
    {
     s=sec;
    }

   ~Time()
   {
   };
};
int main()
{
    int h,m,s;
    int c;
    Time **arr = new Time*[5];
    cout<<"Enter the no. of obj you want:"<<endl;
    cin>>c;
    for (int i = 0; i < c; i++)
    {
        cout<<"Enter values for "<<(i+1)<<" object"<<endl;
        cin>>h>>m>>s;
        arr[i] = new Time(h,m,s);
    }
    for (int i = 0; i < 5; i++)
    {
        cout<<"Output for"<< i <<" obj"<<endl;
        arr[i]->PrintTime();
    }
    
    for (int i = 0; i < 5; i++)
    {
        delete arr[i];
    }
    
    delete[] arr;
    

    return 0;  
}

