#include<iostream>
using namespace std;

int main()
{
	int a[5];
	cout<<"Enter elements for list:"<<endl;
	int b=sizeof(a)/sizeof(a[0]);
	cout<<b;
	for(int i=0;i<b;i++){
		cin>>a[i];
	}
	int val=10;
	int loc=0;
	a[loc]=val;
	int[0]=/0;
	for(int i=b-1;i>=0;i--){
		cout<<a[i]<<endl;
	}
	
	
}