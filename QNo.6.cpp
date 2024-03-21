#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int a[10]={1,2,3,4,5,6,7,8,9,0};
	for(int i=0;i<10;i++)
	{
		if(a[i]%2==0)
		{
				int evenNo=a[i];
				cout<<"even number:"<<a[i];
				int  location=i;
				cout<<"  location is:"<<i<<endl;
		}
	}	
}