#include<iostream>
#include<conio.h>
using namespace std;
/*void copy(int array1[],int array2[],size)
	{
		
	}
*/

void copy(int array1[], int array2[], int size) {
    for(int i = 0; i < size; i++) {
        array2[i] = array1[i];
    }
}

int main()
{ 

	
	int size;
	cout<<"Enter the size of array:";
	cin>>size;
	int array1[size];
	cout<<"Enter the numbers:";
	for(int a=0;a<size;a++)
	{
		cin>>array1[a];
	}
	int array2[size];
	copy(array1,array2,size);
	
	   while (true) {
        cout << "Menu:\n";
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
                cout << "Enter value to insert: ";
                cin >> value;
                cout << "Enter position to insert: ";
                cin >> position;
                  for (int i = size; i > position; --i) {
       					 array2[i] = array2[i - 1];
   					 }
   			 		array2[position] = value;
                break;
            case 2:
                cout << "Enter position to remove: ";
                cin >> position;
                  for (int i = position; i < 4; ++i) {
        			array2[i] = array2[i + 1];
   					 }
                break;
            case 3:
                cout << "Enter position to get: ";
                cin >> position;
                int element=array2[position];
                if (element != -1) {
                    cout << "Element at position " << position << ": " << element << endl;
                } else {
                    cout << "Invalid position." << endl;
                }
                break;
            case 4:
                cout << "Enter position to update: ";
                cin >> position;
                cout << "Enter new value: ";
                cin >> value;
                array2[position]=value;
                
                break;
            case 5:
            	cout << "Enter value to find: ";
                cin >> value;
                for (int i = 0; i < size; ++i) {
       				 if (array2[i] == value)
 			           std::cout << "Value " << value<< " found at position " << i << "\n";
					else 
	    				std::cout << "Value " << value << " not found in the array\n";
 					}
				break;
              	
			case 6:
                cout << "List length: " <<endl;
                break;
            case 7:
            	cout<<"The list is:"
                for(int i=0;i<size;i++)
                	cout<<array2[i];
                break;
            case 8:
                array2.clear();    
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
}