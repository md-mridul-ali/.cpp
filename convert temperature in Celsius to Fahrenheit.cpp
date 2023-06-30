#include<iostream>
using namespace std;
int main()
{
 float frh, cel;

cout <<"Input the temperature in Celsius : ";
cin >> cel;
cout<<"\n";

frh = (cel * 9.0) / 5.0 + 32;
cout <<"The temperature in Fahrenheit : " <<frh<<"\n";

return 0;
}
