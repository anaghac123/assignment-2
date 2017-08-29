#include<iostream>
using namespace std;
int main()
{
float a;
float b;
float c;
float d;
float e;
float f;
float g;
float h;
float i;
cout<<"enter the maximum marks that can be optained in each subject";
cin>>a;
cout<<"enter the marks optained in subject 1";
cin>>b;
cout<<"enter the marks optained in subject 2";
cin>>c;
cout<<"enter the marks optained in subject 3";
cin>>d;
cout<<"enter the marks optained in subject 4";
cin>>e;
cout<<"enter the marks optained in subject 5";
cin>>f;
g=b+c+d+e+f;
cout<<"total marks opyained="<<g;
h=g/5;
cout<<"average marks opyained="<<h;
i=(g*100)/(5*a);
cout<<"percentage of marks opyained="<<i;
}
