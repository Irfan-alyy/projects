#include<iostream>
#include <stack>

using namespace std;

int main() {
    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
	int x;
	cout<<"enter";
    cin>>x;
    s.push(x);
    cout << "Stack size: " << s.size() << endl;
    cout << "Top element: " << s.top() << endl;
    s.pop();
    cout << "Top element after pop: " << s.top() << endl;
    cout << "Stack size: " << s.size() << endl;
    
	cout << "Is stack empty? " << (s.empty() ? "Yes" : "No") << endl;
    while (!s.empty()) {
        cout << "Top element: " << s.top() << endl;
        s.pop();
    }
	cout << "Is stack empty? " << (s.empty() ? "Yes" : "No") << endl;
	return 0;
}