#include <iostream>
#include <vector>
using namespace std;

int main() {
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
    int SizeOfVector=numbers.size();
    int smallest=numbers[0];
    for(int a=0;a<SizeOfVector;a++)
    {
		if (numbers[a]<smallest)
    		smallest=numbers[a];
	}
	
	cout<<"The smallest number from entered numbers is:"<<smallest<<endl;
 
system("pause");
    return 0;
}
