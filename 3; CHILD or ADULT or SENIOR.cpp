#include<iostream>
using namespace std;
int main()
{
int age;
cout<< "Enter your age:";
cin>> age;
if (age <18)
cout << "CHILD";
if(age == 18 || age<35 && age>18)
cout << "ADULT";
if (age>=35)
cout << "SENIOR";
return 0;
}