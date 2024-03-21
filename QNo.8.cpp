#include<iostream>
#include<conio.h>
#include<vector>
using namespace std;
int main()
{
float avg;
vector<int> numbers;
    int input;

    while (true) {
        cout << "Enter a number (or any non-integer to exit): ";
        if (cin >> input) {
            numbers.push_back(input);
        } else {
            break;
        }
}
int size=numbers.size();
cout<<endl;
int sum;
for(int i=0;i<size;i++)
{
	sum+=numbers[i];
}
 avg=float( sum)/size;
cout<<"Average of given numbers is:"<<avg;


}	