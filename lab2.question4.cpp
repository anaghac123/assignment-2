#include<iostream>
using namespace std;
int main()
{
int a;
int b;
int c;
int d;
int e;
cout<<"enter the number of days";
cin>>a;
b=a/365;
c=a%365;
d=c/7;
e=c%7;
cout<<"number of year="<<b;
cout<<"and the number of weeks="<<d;
cout<<"and number of days="<<e;
}

