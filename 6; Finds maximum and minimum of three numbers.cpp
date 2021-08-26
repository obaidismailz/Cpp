#include<iostream>
using namespace std;
int main()
{
int a, b, c, max, min;
cout << "Enter 3 numbers:";
cin >> a >> b >> c;
if (a > b && a>c)
max = a;
else
if (b>a && b>c)
max = b;
else
if(c>a && c>b)
max = c;
cout << "maximum number is:" << max << endl;
if (a < b && a < c)
min=a;
else
if (b < a && b < c)
min = b;
else
if (c < a && c < b)
min = c;
cout << "minimum number is:" << min<< endl;
return 0;
}