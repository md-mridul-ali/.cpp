#include<iostream>
using namespace std;
int main()
{
int n;
cin>>n;
for(int i=0; i<n; i++)
{
    int k=n;
    while(k--)
    {
        if(i<k)
        {
            cout<<" ";
        }
        else
            {
               cout<<"#";
            }
    }
    cout<<"\n";
}


return 0;
}
