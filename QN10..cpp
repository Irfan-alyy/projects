#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	
int A=0,B=0,F=0,S=0;
char name;
for(int a=0;a<10;a++)
{
cout<<"Enter your favourite sports:"<<endl;
cout<<"i.e A for Athletics B for Badminton S for swimming F for football:";
cin>>name;
if(name=='A')
	A++;
else if(name=='B')
	B++;	
else if(name=='F')
	F++;
else if(name=='S')
	S++;
	else
	cout<<endl;
	
}
cout <<"Survey report is following:"<<endl;
cout<<"Athletics:"<<A<<endl;
cout<<"Badminton:"<<B<<endl;
cout<<"Football:"<<F<<endl;
cout<<"Swimming:"<<S<<endl;
if(A>B&&A>S&&A>F)
	cout<<"The most popular sports is Athletics:";	
if(B>A&&B>S&&B>F)
	cout<<"The most popular sports Badminton:";
if(F>B&&F>S&&F>A)
	cout<<"The most popular sports is Football:";
if(S>A&&S>B&&S>F)
	cout<<"The most popular sports is Swimming:";		
}