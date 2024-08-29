#include<iostream>
#include<string>
using namespace std;
class Data{
string name;
int phone_no;
char dept[50];
int id;
public:
Data(){
cout<<"Name: ";
cin>>name;
cout<<"Phone Number: ";
cin>>phone_no;
cout<<"Department: ";
cin>>dept;
cout<<"ID: ";
cin>>id;
}
void display(){
cout<<endl<<"DETAILS:"<<endl<<name<<" "<<phone_no<<" "<<dept<<" "<<id<<endl;
}
};
int main(){
Data d1;
d1.display();
}