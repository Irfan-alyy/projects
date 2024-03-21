#include<iostream>
#include<stack>
using namespace std;
int main()
{

// program to perform operations on a stack
stack <int> t;
cout<<"This is stack program:";
int c;
int count=0;
while(true){
cout<<"\nMenu:\n";
cout<<"1: Push element in stack.\n";
cout<<"2: Pop element from stack.\n";
cout<<"3: Check if the stack is full.\n";
cout<<"4: Check if the stack is empty.\n";
cout<<"5: Show the stack.\n";
cout<<"0: To exit!"<<endl;
int element;
cin>>c;
if(c==0)
	break; 


switch(c){
	
	
	case 1:
		cout<<"enter element to push in stack.\n";
		cin>>element;
		if(count<5)
		{
		t.push(element);
		count++;
		cout<<"Element pushed in stack.";
		break;
}
		else
			cout<<"stack is full";	
		break;
	case 2:
		if(count>0){
		t.pop();
		cout<<"Poped top element from stack.";
		count--;
		}
		else
			cout<<"stack is empty.";
		break;
	case 3:
		if(count<100)
			cout<<"Stack is not full.";	
		else
			cout<<"stack is full";
		break;
	case 4:
		if(t.empty())
			cout<<"Stack is Empty.";
		else
			cout<<"Stack is not Empty.";
		break;
	case 5:
		cout<<"Elements are following:";
		while (!t.empty()) {
        cout<<" "<< t.top();
        t.pop();}
        break;
		}
}
}
	
