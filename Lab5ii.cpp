#include<iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

// Function to insert node
void insertNode(Node** head, int newData) {
    Node* newNode = new Node();
    newNode->data = newData;
    newNode->next = (*head);
    (*head) = newNode;
}

// Function to delete node
void deleteNode(Node **head, int key) {
    Node* temp = *head;
    Node *prev;
    if (temp != NULL && temp->data == key) {
        *head = temp->next;
        delete temp;
        return;
    }
    while (temp != NULL && temp->data != key) {
        prev = temp;
        temp = temp->next;
    }
    if (temp == NULL) return;
    prev->next = temp->next;
    delete temp;
}

// Function to update node
void updateNode(Node* node, int newData) {
    if (node != NULL) {
        node->data = newData;
    }
}

// Function to check if a value is present
bool checkValue(Node* head, int val) {
    Node* current = head;
    while (current != NULL) {
        if (current->data == val)
            return true;
        current = current->next;
    }
    return false;
}

// Function to print the linked list
void printList(Node* node) {
    while (node != NULL) {
        cout << node->data << " ";
        node = node->next;
    }
}

int main() {
    Node* head = NULL;
    insertNode(&head, 1);
    insertNode(&head, 2);
    insertNode(&head, 3);
    insertNode(&head, 4);
    insertNode(&head, 5);
    insertNode(&head, 6);
    cout << "Created Linked List: ";
    printList(head);
    //deleteNode(&head, 1);
    cout<<"check"<<checkValue(head,2);
    deleteNode(&head,5);
    updateNode(head,0 );
    printList(head);
    cout << "\nLinked List after Deletion of 1 and 5: ";
    printList(head);
    return 0;
}
