#include<iostream>
using namespace std;
class Stack {
    int top,size;
    int arr[];

public:
    Stack(int size) {
        top = -1;
        this->size=size;
    	arr[size];
	}

    bool isFull() {
        return (top == size - 1);
    }

    bool isEmpty() {
        return (top == -1);
    }

    void push(int x) {
        if (isFull()) {
            cout << "Stack Overflow";
        } else {
            arr[++top] = x;
            cout << x << " pushed into stack\n";
        }
    }

    int pop() {
        if (isEmpty()) {
            cout << "Stack Underflow";
            return 0;
        } else {
            int x = arr[top--];
            return x;
        }
    }

    int peek() {
        if (isEmpty()) {
            cout << "Stack is Empty";
            return 0;
        } else {
            int x = arr[top];
            return x;
        }
    }
};

int main() {
    Stack s(5);
    int choice, value;
    do {
        cout << "\n\nMenu:\n1. Push\n2. Pop\n3. Peek\n4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        switch(choice) {
            case 1: cout << "Enter a value to push: ";
                    cin >> value;
                    s.push(value);
                    break;
            case 2: cout << "Popped " << s.pop() << " from stack\n";
                    break;
            case 3: cout << "Top element is: " << s.peek() << "\n";
                    break;
            case 4: break;
            default: cout << "Invalid choice\n";
        }
    } while(choice != 4);

    return 0;
}
