#include<iostream>
using namespace std;

class Num{

public:
Num(int a, int b){
if(a>b){
cout<<a<<" is greater";
}
else{
cout<<b<<" is greater";
}
}
};
int main(){
Num n1(22,13);
}