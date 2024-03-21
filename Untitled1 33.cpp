#include<iostream>
#include<conio.h>
#include<stack>
#include<string>
using namespace std;
int precedence(char op){
	if(op=='+'||op=='-')
		return 1;
	if(op=='*'||op=='/')
		return 2;
	return 0;		
}
			
int main(){
int b[5];
char op;
string a;
int sl=0;
cout<<"Enter expresion:";
cin>>a;
string p;

int o,w=0;	
	stack <char> s;	
	for(int i=0;i<=a.length();i++)
	{
		if(a[i]>='a'&&a[i]<='z'){
		
			p+=a[i];
			cout<<"Enter value of:"<<a[i];
			cin>>b[w];
			w++;
	}
		else{
			if(!s.empty()&&precedence(a[i])<=precedence(s.top()))
			{
				p+=s.top();
				s.pop() ;
			}
	    	s.push(a[i]);
		}	
        
        }
	while(!s.empty()){
	
	p+= s.top();
    s.pop();
    }
cout<<"Postfix expresions is:"<<p<<endl;
int val1=b[0];
int val2=b[1];
op=1-p.length();
if(op=='+')
	sl=val1+val2;
if(op=='-')
	sl=val1-val2;
if(op=='*')
	sl=val1*val2;
if(op=='/')
	sl=val1/val2;
cout<<"Solution of given numbers is:"<<sl;	
return 0;
}