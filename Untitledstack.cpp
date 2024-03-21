#include <iostream>
#include <stack>
#include <map>
#include <string>

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
    for(int i = 0; i < s.length(); i++){
        if(s[i] >= 'a' && s[i] <= 'z'){
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

int evaluatePostfix(string s, map<char, int> values){
    stack<int> st;
    for(int i = 0; i < s.length(); i++){
        if(s[i] >= 'a' && s[i] <= 'z'){
            st.push(values[s[i]]);
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
    string s;
    cout << "Enter an expression: ";
    cin >> s;
    string postfix = infixToPostfix(s);
    cout << "Postfix notation: " << postfix << endl;
    map<char, int> values;
    for(char c : postfix){
        if(c >= 'a' && c <= 'z'){
            cout << "Enter the value of " << c << ": ";
            cin >> values[c];
        }
    }
    cout << "The result is: " << evaluatePostfix(postfix, values) << endl;
    return 0;
}
