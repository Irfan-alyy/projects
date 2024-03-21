#include<iostream>
#include<conio.h>
using namespace std;
void insertionsort(int arr[], int size){
     int current; 
      for (int i = 1; i <size; i++)
    {
        current=arr[i];
        int j=i-1;    
            while(j>=0&&arr[j]>current)
            {
                arr[j+1]=arr[j];
                j--;
            }
        arr[j+1]=current;

        }
}
int main(){
    int n=5;
    int arr[n];
    cout<<"enter 5 numbers"<<endl;
    for (int i = 0; i <n; i++)
    {
        /* code */
        cin>>arr[i];
    }
    
  
    
//  int current;
//  for (int i = 0; i < n; i++)
//  {
//     current=arr[i];
//     int j=i-1;
//     while (arr[j]>current&& j>=0)
//     {
//         arr[j+1]=arr[j];
//         j--;
//     }

//     arr[j+1]=current;
//     }
    int temp;
for (int i = 0; i < n-1; i++)
{
    for (int j = i+1; j <n; i++)
    {
    if(arr[j]<arr[i]){
     temp=arr[j];
     arr[j]=arr[j+1];
     arr[j+1]=temp;   
    }
    }
    
}
 for (int i = 0; i <n; i++)
    {
        /* code */
        cout<<arr[i];
    } 

 }
       
