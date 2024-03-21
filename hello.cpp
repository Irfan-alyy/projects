#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
char name;
int A=0,B=0,S=0,F=0;
for(int a=0;a<=10;a++)
{
	cout<<"Enter Your favourite sports."<<endl;
	cout<<"i.e 'A' for Athletics 'B' Badminton 'F' Football 'S' Swimming:";
	cin>>name;
	if(name=='A'||name=='a')
		A++;
	if(name=='B'||name=='b')
		B++;
	if(name=='S'||name=='s')
		S++;
	if(name=='F'||name=='f')
		F++;
					
}
cout<<"Survey of 10 people are following:"<<endl;
cout<<"Athletics:"<<A<<endl;
cout<<"Badminton:"<<B<<endl;
cout<<"Football:"<<F<<endl;
cout<<"Swimmimg:"<<S<<endl;
if(A>B&&A>F&&A>S)
	cout<<"The most popular game is Athletic";
else if(B>A&&B>F&&B>S)
	cout<<"The most popular game is Badminton";	
else if(F>A&&F>B&&F>S)
	cout<<"The most popular game is Football";
else if(S>A&&S>F&&S>B)
	cout<<"The most popular game is Swimming";

}	