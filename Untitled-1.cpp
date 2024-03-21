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

    int get(int index) {
        if(index >= 0 && index < size) {
            return array[index];
        } else {
            cout << "Array index out of bound";
            return -1;
        }
    }

    int find(int value) {
        for(int i = 0; i < size; i++) {
            if(array[i] == value) {
                return i;
            }
        }
        return -1;
    }

    void clear() {
        for(int i = 0; i < size; i++) {
            array[i] = 0;
        }
    }

    int length() {
        return size;
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

    // Get value
    cout << arr.get(2) << endl;

    // Find value
    cout << arr.find(3) << endl;

    // Clear array
    arr.clear();

    // Get length
    cout << arr.length() << endl;

    return 0;
}
