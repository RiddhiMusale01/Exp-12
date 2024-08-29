#include <iostream> 
#include <string.h>
using namespace std;
class employee
{
 int phno;
 char name[50];
 double salary;
 public:
 employee(int,char[],double);
 employee(employee &t) {
 phno=t.phno;
 strcpy(name,t.name);
 salary=t.salary;
 }
 void display();
 
};
 employee::employee(int no,char n[],double s)
 {
 phno=no;
 strcpy(name,n);
salary=s;
 } 
 void employee::display()
 {
 cout<<endl<<phno<<"\t"<<name<<"\t"<<salary;
 }
 
int main()
{
 employee e(1001,"abc",10000);
 e.display();
 
 employee abc(e); 
 abc.display();
 
 return 0;
}