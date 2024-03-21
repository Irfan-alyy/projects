

void deletenode(Node **head, int value){
    Node *temp= head;
    Node* prev;
    if(temp!=NULL&& temp->data==value){
      head=temp->next;
      delete temp;
      return;  
    }
    while(head!=NULL&&temp->data!=value){
        prev=temp;
        temp=temp->next;
    }
    if(temp==NULL) return;
    prev->next=temp->next;
    delete temp;
    return
}