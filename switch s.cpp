#include<iostream>
using namespace std;
int main()
{
int b;
switch (b)
{
cout<<"Enter 1,2or3";
cin>>b;
case 1:
cout<<"First number";
break;
case 2:
cout<<"second number";
break;
case 3:
cout<<"third number";
break;
default:
cout<<"invalid number";
}
return 0;
} 