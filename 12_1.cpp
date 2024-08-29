#include<iostream>
using namespace std;
class employee
{
 int phone_no;
 char name[50];
 double salary;
 public:
 employee()
 {
 cout<<"Enter the phone no.:"<<endl;;
 cin>> phone_no;
 cout<<"Enter the Name:"<<endl;
 cin>>name;
 cout<<"Enter the salary:"<<endl; 
 cin>>salary; 
 } 
 
void display()
{
 cout<<endl<<phone_no <<"\t"<<name<<"\t"<<salary;
 }
};
int main()
{
 employee e; 
 e.display();
 return 0;
}
