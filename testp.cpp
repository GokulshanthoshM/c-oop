#include<iostream>
#include<conio.h>
using namespace std;

class student
{
	public:
		int a,b,c,d,e,tot,regno;
		float avg;
		char n[100];
		student()
		{
			cout<<"Enter your name: ";
			cin>>n;
			cout<<"Enter Register number: ";
			cin>>regno;
			cout<<"Enter Mark 1: ";
			cin>>a;
			cout<<"Entet Mark 2: ";
			cin>>b;
			cout<<"Enter Mark 3: ";
			cin>>c;
			cout<<"Enter Mark 4: ";
			cin>>d;
			cout<<"Enter Mark 5: ";
			cin>>e;
			
		}
		void score()
		{
			tot=a+b+c+d+e;
			avg=tot/5;
		}
		void display()
		{
			cout<<"Name: "<<n<<endl;
			cout<<"Regno: "<<regno<<endl;
			cout<<"Total Marks: "<<tot<<endl;
			cout<<"Average: "<<avg<<endl;
			
		}
};

int main()
{
	student s;
	s.score();
	s.display();
	return 0;
}