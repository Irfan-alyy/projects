#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int NumGrade;
	cout<<"Enter grade in number:"<<endl;
    cin>>NumGrade;
    char letGrade;
    
 switch(NumGrade){
 
case 1:
	letGrade='A';// code block
	break;
case 2:
	letGrade='B';// code block
	break;
case 3:
	letGrade='C';// code block
	break;
case 4:
	letGrade='D';// code block
	break;	
default:
	letGrade='F';// code block
}
cout<<"Grade in letter form is: "<<letGrade;
}