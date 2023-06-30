#include<iostream>
using namespace std;
int main()
{
 float frh, cel;

cout <<"Input the temperature in fahrenheit : ";
cin >> frh;
cout<<"\n";

cel = ((frh * 5.0)-(5.0 * 32))/9;
cout <<"The temperature in Celsius : " <<cel<<"\n";

return 0;
}
