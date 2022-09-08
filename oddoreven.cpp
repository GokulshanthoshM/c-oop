#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int a,m,n;
    cout<<"enter the start of range(m)";
    cin>>n;
    cout<<"enter the end of the rang(n)";
    cin>>m;
    if(m<n)
    {
        for(int i=m;i<=n;i++)
        {
            if(i%2==0)
            {
                cout<<i<<"odd";
            }
            else
            {
            cout<<i<<"even";
            }
                
        }
    }
    if(m>n)
    {
        cout<<"invalid:m must be smaller than n";
    }
}
