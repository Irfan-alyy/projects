#include<iostream>
#include<conio.h>
using namespace std;

void copy(int array1[], int array2[], int size) {// function for copy array
    for(int i = 0; i < size; i++) {
        array2[i] = array1[i];
    }
}

int main() { 
    int size;
    cout << "Enter the size of array:";
    cin >> size;
    int array1[size]; 
	cout << "Enter the numbers:";// taking input from user in array
    for(int a = 0; a < size; a++) {
        cin >> array1[a];
    }
    int array2[size]; 
    copy(array1, array2, size); 

    while (true) {
        cout << "Menu:\n";//showing choices for operation
        cout << "1. Insert Element\n";
        cout << "2. Remove Element\n";
        cout << "3. Get Element\n";
        cout << "4. Update Element\n";
        cout << "5. Find Element\n";
        cout << "6. List Length\n";
        cout << "7. Display List\n";
        cout << "8. Clear List\n";
        cout << "0. Exit\n";
        cout << "Enter your choice: ";
        int choice;
        cin >> choice;

        if (choice == 0) {
            break;
        }
        
        switch (choice) {
            case 1:
                int value, position;
                cout << "Enter value to insert: ";//insert value at particular position
                cin >> value;
                cout << "Enter position to insert: ";
                cin >> position;
                for (int i = size; i > position; --i) {
                    array2[i] = array2[i - 1];
                }
                array2[position] = value;
                break;
            case 2:
                cout << "Enter position to remove: ";// to remove element from array
                cin >> position;
                for (int i = position; i <=(size - 1); ++i) { 
				                    array2[i] = array2[i + 1];
                }
                break;
            case 3:
                cout << "Enter position to get: ";// getting element from array
                cin >> position;
                if (position >= 0 && position < size) { 
				    int element = array2[position];
                    cout << "Element at position " << position << ": " << element << endl;
                } else {
                    cout << "Invalid position." << endl;
                }
                break;
            case 4:
                cout << "Enter position to update: ";// change array element
                cin >> position;
                if (position >= 0 && position < size){
                    cout << "Enter new value: ";
                    cin >> value;
                    array2[position] = value;
                } else {
                    cout << "Invalid position." << endl;
                }
                
                break;
            case 5:
                cout << "Enter value to find: ";// find value from array
                cin >> value;
               for (int i = 0; i < size; ++i) {
                   if (array2[i] == value) {
                       std::cout << "Value " << value<< " found at position " << i << "\n";
                       break;                    }
               }
               cout << "Value " << value << " not found in the array\n";

               break;
            case 6:
                cout << "List length: " << size << endl;// to find array length 
                break;
            case 7:
                cout << "The list is:";
                for(int i = 0; i < size; i++) {
                    cout << array2[i] << " "; 
                }
                cout << endl; 
                break;
            case 8:
                delete[] array2;
                cout<<"The list is deleted.";// clear list
                break;
            
            //default:
            //	cout<<"Invalid value choice"<<endl;
			   }
    }

 
}
