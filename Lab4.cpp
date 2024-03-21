#include<iostream>
using namespace std;

void insertionSort(int array[], int n) {
    int current;
    for(int i = 1; i < n; i++) {
        current = array[i];
        int j = i - 1;
        while(j >= 0 && array[j] > current) {
            array[j + 1] = array[j];
            j--;
        }
        array[j + 1] = current;
    }}
void selectionSort(int arr[], int n) {
    int temp;
    for (int i = 0; i < n-1; i++) {
        for (int j = i+1; j < n; j++)
        if (arr[j] < arr[i])
        {
        temp = arr[j];
        arr[j] = arr[i];
        arr[i] = temp;
    }}
}
void bubbleSort(int arr[], int n) {
    for(int i = 0; i < n-1; i++) {     
        for (int j = 0; j < n-i-1; j++) { 
            if (arr[j] > arr[j+1]) {
                // Swap arr[j] and arr[j+1]
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}
int binarySearch(int data[], int size, int value) {
    int first = 0;
    int last = size - 1;
    while (first <= last) {
        int middle = (first + last) / 2;
        if (data[middle] == value)
            return middle;
        else if (value < data[middle])
            last = middle - 1;
        else
            first = middle + 1;
    }
    return -1; // Return -1 if the value is not found
}
int main() {
    cout << "A program for Sorting and searching array."<<endl;
    while(true){
        int size;
        cout<<"\nEnter size of array:";
        cin>>size;
        int arr[size];
        cout<<"Enter elements:";
        for(int i = 0; i < size; i++)
            cin>>arr[i];
        int ch;
        cout<<"\n\tMenu:\n";
        cout<<"1:Insertion sort"<<endl;
        cout<<"2:Selection sort"<<endl;
        cout<<"3:Bubble sort"<<endl;
        cout<<"4:Binary search"<<endl;
        cin>>ch;
        switch (ch)
        {
        case 1:
        insertionSort(arr, size);
        cout<<"Array after insert sorting: ";
        for(int i = 0; i < size; i++) {
            cout<<arr[i]<<" ";
        }
            break;
        case 2:
        selectionSort(arr,size);
        cout<<"Array after select sorting:";
        for(int i = 0; i < size; i++)
            cout<<arr[i]<<" ";
            break;
        case 3:
        bubbleSort(arr,size);
        cout<<"Array after bubble sorting:";
        for(int i = 0; i < size; i++) 
            cout<<arr[i]<<" ";
            break;
        case 4:
            insertionSort(arr, size);
                cout<<"Array after sorting: ";
                for(int i = 0; i < size; i++){
                    cout<<arr[i]<<" ";
                }
            int a;
            cout<<endl;
            cout<<"Enter value to find:";
            cin>>a;
            if(binarySearch(arr,size,a)==-1)
                cout<<"Value not found.";
            else
                cout<<"Value index is  "<< binarySearch(arr,size,a) ; 
            break;
        default:
            break;
        }    
    
    }
   
   
    
    return 0;
}
