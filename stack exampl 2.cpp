#include<iostream>
#include<stack>
#include<string>
#include<map>

using namespace std;

int precedence(char op){
    if(op == '+'||op == '-')
    return 1;
    if(op == '*'||op == '/')
    return 2;
    return 0;
}

int applyOp(int a, int b, char op){
    switch(op){
        case '+': return a + b;
        case '-': return a - b;
        case '*': return a * b;
        case '/': return a / b;
    }
}

string infixToPostfix(string s){
    stack<char> st;
    string postfix = "";
    for(int i = 0; i<s.length(); i++){
        if(s[i] >= '0' && s[i] <= '9'){
            postfix += s[i];
        }
        else{
            while(!st.empty() && precedence(s[i]) <= precedence(st.top())){
                postfix += st.top();
                st.pop();
            }
            st.push(s[i]);
        }
    }
    while(!st.empty()){
        postfix += st.top();
        st.pop();
    }
    return postfix;
}

int evaluatePostfix(string s){
    stack<int> st;
    for(int i = 0; i<s.length(); i++){
        if(s[i] >= '0' && s[i] <= '9'){
            st.push(s[i] - '0');
        }
        else{
            int val2 = st.top();
            st.pop();
            int val1 = st.top();
            st.pop();
            st.push(applyOp(val1, val2, s[i]));
        }
    }
    return st.top();
}

int main(){
    string exp;
    cout << "Enter an expression: ";
    cin >> exp;
    string postfix = infixToPostfix(exp);
    cout << "Postfix expression: " << postfix << endl;
    cout << "Enter values of operands: ";
    map<char, int> values;
    for(char c: exp){
        if(c >= '0' && c <= '9'){
            int val;
            cin >> val;
            values[c] = val;
        }
    }
    for(int i = 0; i<postfix.length(); i++){
        if(postfix[i] >= '0' && postfix[i] <= '9'){
            postfix[i] = values[postfix[i]] + '0';
        }
    }
    cout << "Result: " << evaluatePostfix(postfix) << endl;
    return 0;
}
