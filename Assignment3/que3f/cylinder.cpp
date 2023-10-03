#include "./cylinder.h"

Cylinder::Cylinder():radius(0), height(0){}
// {
//  radius=20.0;
//  height=50.0;
// }


double Cylinder::getRadius()
{
 return radius;
}
void Cylinder::setRadius(double r)
{
 radius=r;
}
double Cylinder::getHeight()
{
 return height;
}
void Cylinder::setHeight(double h)
{
 height=h;
}
double Cylinder::getVolume()
{
return 3.14*radius*radius;
}
void Cylinder::printVolume()
{
 cout<<getVolume();
}


