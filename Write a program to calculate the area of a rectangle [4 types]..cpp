#include<iostream>
#include<math.h>
using namespace std;
void square(int a)
{
  double S =pow(a,2);
   cout<<"Area of Square:"<<S;
}
void rectangle(int c,int d)
{
  double R = c*d;
  cout<<"Area of rectangle:"<<R;
}
void rhombus(int p,int q)
{
    double RB=0.5*(p*q);
    cout<<"Area of Rhombus:"<<RB;
}
void rhomboid(int x,int y)
{
   double RM =x*y;
   cout<<"Area of Rhomboid:"<<RM;
}
int main()
{
int a;
cout<<"Enter the value of square side:";
cin>>a;
square(a);

int c,d;
cout<<"\nEnter the length of rectangle:";
cin>>c;

cout<<"Enter the width of rectangle:";
cin>>d;
rectangle(c,d);

int p,q;
cout<<"\nEnter the value of rhombus diagonal  length 1:";
cin>>p;

cout<<"Enter the value of rhombus diagonal length 2:";
cin>>q;
rhombus(p,q);

int x,y;
cout<<"\nEnter the value of base for rhomboid:";
cin>>x;

cout<<"Enter the value of height rhomboid :";
cin>>y;
rhomboid(x,y);

return 0;
}
