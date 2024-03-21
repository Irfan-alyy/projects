#include<iostream>
using namespace std;
#define n 20
class queue
{
    int *arr;int front;int back; int size;
    public:
    queue(){
         arr=new int[n];
        front=-1;
        back=-1;
        size=0;

    }
    void push(int x){
        if(size==n){
            cout<<"queue is full";
            return;
        }
        back=(back+1)%n;
        arr[back]=x;
        size++;
        cout<<x<<"pushed"<<endl;
    }
    void pop(){
        if(size<=0 ){
            cout<<"queue is empty";
            return;
        }
        if(front==back){
            front=-1;back=-1;
        }
        else{
        front=(front+1)%n;}
        //cout<<arr[front]<<"poped";
        size--;
    }
    int peek(){
        if(front==-1||front>back){
            cout<<"queue is empty";
            return -1;
        }
       return arr[front];
    }
    bool empty(){
        if(size<=0){
            return true;
        }
        return false;
    }
    bool full(){
        if(size==n){
            return true;
        }
        return false;
    }

};



int main(){
    queue q;
    if(q.empty())
        cout<<"empty";
     else
        cout<<"not empty";
    q.push(1);
    q.push(2);
    q.push(3);
    cout<<q.full();
    cout<<q.peek();
    q.pop();
    cout<<q.peek();
    q.pop();
    cout<<q.peek();
    q.pop();
    cout<<q.peek();
}