#include<iostream>
using namespace std;
struct Node{
    int data;
    Node* pointer;
};
void insert(Node**head, int data){
    Node* newnode= new Node();
    newnode->data=data;
    newnode->pointer=(*head);
    (*head)=newnode;
}

int main(){

}