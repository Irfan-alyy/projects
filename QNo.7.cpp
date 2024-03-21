#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
 int base,power;
 cout<<"Enter base:"<<endl;
 cin>>base;
 cout<<"Enter power:"<<endl;
 cin>>power;
 int sol=0;
 for(int a=1;a<=power;a++)
 	sol=sol+base;
cout<<"The solution is:"<<sol;

}	