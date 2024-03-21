#include <iostream>

// Define a structure
struct Node {
    int data;
    Node* next;
};

int main() {
    // Declare an integer
    int a = 10;

    // Declare a pointer and store the address of 'a'
    int* p = &a;

    // Declare a double pointer and store the address of 'p'
    int** pp = &p;

    // Print the values
    std::cout << "Value of a: " << a << std::endl;
    std::cout << "Value of p: " << p << std::endl;
    std::cout << "Value of *p: " << *p << std::endl;
    std::cout << "Value of pp: " << pp << std::endl;
    std::cout << "Value of *pp: " << *pp << std::endl;
    std::cout << "Value of **pp: " << **pp << std::endl;

    // Declare a Node structure
    Node node1;
    node1.data = 1;
    node1.next = NULL;

    // Link one structure to another
    Node node2;
    node2.data = 2;
    node2.next = &node1;

    // Print the data values
    std::cout << "Data of node1: " << node1.data << std::endl;
    std::cout << "Data of node2: " << node2.data << std::endl;
    std::cout << "Data of next node linked to node2: " << node2.next->data << std::endl;

    return 0;
}
