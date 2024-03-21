#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int age;
	cout<<"Enter your age:"<<endl;
	cin>>age;
	float discount;
	if(age<12)
		discount=0;
	else if(age<24)
		discount=0.7;
	else
		discount=1;
	cout<<"Given discount is "<<discount<<"%"<<endl;		
			
}