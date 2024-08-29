#include<iostream>
using namespace std;
class employee
{
 int phone_no;
 char name[50];
 double salary;
 public:
 employee();
 void display(); };
employee::employee()
 {
 cout<<"Enter the phone no.:";
 cin>>phone_no;
 cout<<"Enter the Name:";
 cin>>name;
 cout<<"Enter the salary:"; 
 cin>>salary;
 } 
 void employee::display()
 {
 cout<<endl<<phone_no<<"\t"<<name<<"\t"<<salary;
 }
int main()
{
 employee e;
 e.display();
 return 0;
}