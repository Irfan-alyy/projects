#include<iostream>
#include<stack>
#include<string>
#include<map>
using namespace std;
int precedence(char op){
	if(op=='+'||op=='-')
		return 1;
	if(op=='*'||op=='/')
		return 2;
	return 0;		
}
string toPostfix(string a){
	string p;
	stack <char> s;	
	for(int i=0;i<=a.length();i++)
	{
		if(a[i]>='a'&&a[i]<='z')
			p+=a[i];
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
    return p;
}

int main()
{
	string a;
	cout<<"Enter The expressions:";
	cin>>a;
	cout<<"Postfix expression is:"<<toPostfix(a)<<endl;}
    

