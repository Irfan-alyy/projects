#include<iostream>
using namespace std;

#define SIZE 5

class Queue {
    int items[SIZE], front, rear;

public:
    Queue() {
        front = -1;
        rear = -1;
    }

    bool isFull() {
        if (front == 0 && rear == SIZE - 1) {
            return true;
        }
        return false;
    }

    bool isEmpty() {
        if (front == -1) {
            return true;
        }
        return false;
    }

    void enqueue(int element) {
        if (isFull()) {
            cout << "Queue is full\n";
        } else {
            if (front == -1) front = 0;
            rear++;
            items[rear] = element;
            cout << "Inserted " << element << "\n";
        }
    }

    int dequeue() {
        int element;
        if (isEmpty()) {
            cout << "Queue is empty\n";
            return (-1);
        } else {
            element = items[front];
            if (front >= rear) {
                front = -1;
                rear = -1;
            } else {
                front++;
            }
            cout << "Deleted Element -> " << element << "\n";
            return (element);
        }
    }
};

int main() {
    Queue q;

    //inserting elements in queue
    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    q.enqueue(4);
    q.enqueue(5);

    //delete element from queue
    q.dequeue();
    q.dequeue();

    //check if queue is empty or full
    if(q.isEmpty()) {
        cout << "Queue is empty\n";
    } else if(q.isFull()) {
        cout << "Queue is full\n";
    } else {
        cout << "Queue is not empty\n";
		cout<<"queue is not full\n";
    }

    return 0;
}
