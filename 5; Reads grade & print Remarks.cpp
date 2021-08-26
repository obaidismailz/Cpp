#include<iostream>
using namespace std;
int main()
{
char al;
cout << "Please enter your grade:";
cin >> al;
if (al == 'A' || al == 'a')
cout << "Excellent";
if (al == 'B' || al == 'b')
cout << "Good";
if (al == 'C' || al == 'c')
cout << "Fair";
if (al == 'D' || al == 'd')
cout << "Poor";
if (al == 'F' || al == 'f')
cout << "Failure";
return 0;
}