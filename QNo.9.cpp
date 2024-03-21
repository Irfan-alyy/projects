#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;
int main()
{
 int num;
 float sqrNum;
 cout<<"Enter a number:";
 cin>>num;
 if(num>0)
 	{
 	sqrNum=sqrt(float(num));
	cout<<"Square root of "<<num<<" is:"<<sqrNum;	
	 }
 else
 	cout<<"No solution.";

}	