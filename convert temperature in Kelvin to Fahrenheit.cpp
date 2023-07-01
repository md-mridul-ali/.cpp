#include<iostream>
using namespace std;
int main()
{
float kel, frh;

cout <<" Input the temperature in Kelvin : ";
cin >> kel;
cout<<"\n";

frh = (9.0 / 5) * (kel - 273.15) + 32;
cout << " The temperature in Fahrenheit : " << frh <<"\n";

return 0;
}
