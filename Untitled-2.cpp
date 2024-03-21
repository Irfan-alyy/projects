#include<iostream>
using namespace std;

class MyArray {
    int* array;
    int size;

public:
    MyArray(int size) {
        this->size = size;
        array = new int[size];
    }

    void set(int index, int value) {
        if(index >= 0 && index < size) {
            array[index] = value;
        } else {
            cout << "Array index out of bound";
        }
    }

    int get(int index) {
        if(index >= 0 && index < size) {
            return array[index];
        } else {
            cout << "Array index out of bound";
            return -1;
        }
    }

    void insert(int index, int value) {
        if(index >= 0 && index < size) {
            for(int i = size - 1; i > index; i--) {
                array[i] = array[i - 1];
            }
            array[index] = value;
        } else {
            cout << "Array index out of bound";
        }
    }

    void remove(int index) {
        if(index >= 0 && index < size) {
            for(int i = index; i < size - 1; i++) {
                array[i] = array[i + 1];
            }
            array[size - 1] = 0; // or any default value
        } else {
            cout << "Array index out of bound";
        }
    }

    void update(int index, int value) {
        if(index >= 0 && index < size) {
            array[index] = value;
        } else {
            cout << "Array index out of bound";
        }
    }

    ~MyArray() {
        delete[] array;
    }
};

int main() {
    MyArray arr(5);

    // Set values
    for(int i = 0; i < 5; i++) {
        arr.set(i, i+1);
    }

    // Insert value
    arr.insert(2, 10);

    // Remove value
    arr.remove(3);

    // Update value
    arr.update(1, 20);

    // Get values
    for(int i = 0; i < 5; i++) {
        cout << arr.get(i) << " ";
    }

    return 0;
}
