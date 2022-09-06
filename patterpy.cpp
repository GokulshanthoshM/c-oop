#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	int i,j,r,num=1;
	cout<<"enter the number of rows: ";
	cin>>r;
	
	for(i=1;i<=r;i++)
	{
		for(j=1;j<=i;++j)
		{
			cout<<num<<" ";
			++num;
		}
		cout<<endl;
	}
	return 0;
}