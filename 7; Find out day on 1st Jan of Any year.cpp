#include<iostream>
using namespace std;
int main()
{
int year, a, day;
day = 0;
cout<<"Enter a year:";
cin >> year;
for (a = 1900; a < year; a++)
{
if (a % 4 == 0)
day = day + 366;
else
day = day + 365;
}
day = day % 7;
if (day == 1)
cout<<"It'll be monday on 01/01/"<< year;
if (day == 2)
cout << "It'll be tuesday on 01/01/" << year;
if (day == 3)
cout << "It'll be wednesday on 01/01/" << year;
if (day == 4)
cout << "It'll be thursday on 01/01/" << year;
if (day == 5)
cout << "It'll be friday on 01/01/" << year;
if (day == 6)
cout << "It'll be saturday on 01/01/" << year;
if (day == 0)
cout << "It'll be sunday on 01/01/" << year;
return 0;
}