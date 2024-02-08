#include<iostream>
using namespace std;
int main()
{
int n,sum=0,Sum =0;
cout<<"Enter the number of array elements:";
cin>>n;

int array[n];
cout<<"Enter array elements:";
for(int i=0; i<n; i++)
     {

        cin>>array[i];
     }
     cout<<"Array elements are:";
for(int i=0; i<n; i++)
     {
        cout<<array[i]<<"  ";
     }

     for(int i=0; i<n; i++)
     {
         if(array[i]%2 == 0)
         {
             sum = sum+array[i];
         }
         else{
            Sum= Sum+array[i];
         }
     }
     cout<<"\nSum of even number:"<<sum;
     cout<<"\nSummation of odd number:"<<Sum;
return 0;
}
