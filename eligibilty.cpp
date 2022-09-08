#include<iostream>
#include<string.h>
using namespace std;
int main ()
{
   int age;
   
   cout<<"Enter your real age: ";
   cin>>age;
   if((age >= 'a'&& age <= 'z') || (age >= 'A' && age <= 'Z')) 
   {
   	cout<<"enter valid number";
   }
   else if(age<0)
   {
   	cout<<"Invalid Input";
   	
   }
   else if(age<18)
   {
   	cout<<"You are eligible to vote at"<<18-age<<" "<<"years";
   }
   else 
   {
   	cout<<"You are eligible to vote for dmk";
   	
   }
   return 0;
}