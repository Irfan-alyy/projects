#include<iostream>
using namespace std;

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
int main(){
cout<<"A program for Sorting and searching array."<<endl;
int size;
cout<<"Enter the size of array:";
cin>>size;
int arr[size];
for(int i=0;i<size;i++){
    cin>>arr[i];
}
 int a;
    cout<<"Enter value to find.";
    cin>>a;
    if(binarySearch(arr,size,a)==-1)
        cout<<"Value not found.";
    else
        cout<<"Value index is"<< binarySearch(arr,size,a) ;
    return 0;
}