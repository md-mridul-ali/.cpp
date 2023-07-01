#include<iostream>
using namespace std;
int main()
{
float kel, cel;

cout <<" Input the temperature in Kelvin : ";
cin >> kel;
cout<<"\n";

cel = kel - 273.15;
cout << " The temperature in Celsius : " << cel <<"\n";

return 0;
}
