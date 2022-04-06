#include <iostream>

using namespace std;
#define MAX 1000
int counter=0;
class Node{
public:
    int data;
    Node *next;
    Node(int x,Node *n){
    data=x;
    next=n;
    };
};

class Stack{
 private:
    Node *top;
public:
    Stack(int capacity){
    capacity=MAX;
    top=NULL;}

    bool isEmpty(){

    if(top==NULL){
        return true;
    }
    else return false;
}

void push(int data){

if(counter>=MAX){
    cout<<"Stack is full.You can not push any data."<<endl;

 }
else {
    Node *temp=new Node(data,nullptr);
 temp->next=top;
 top=temp;
 counter++;
    }
}

 Node* pop(){
     Node *temp;
     if(top==NULL){
        cout<< "Stack is empty."<<endl;
        return NULL;
     }
     else {
     temp=top;
     top=top->next;
     counter--;
     cout<<"Deleted"<<endl;
     return temp;
       }



 }


void peek(){
if(isEmpty()==true){
    cout<< "Stack is empty."<<endl;
}
else cout <<"Top is:"<<top->data<<endl;
}
void size(){
cout<<"Number of the elements is:"<<counter<<endl;}
};
int main()
{
Stack s(5);
s.push(5);
s.push(7);
s.peek();
s.push(9);
s.push(11);
s.size();
s.peek();
s.pop();
s.pop();
s.pop();
s.pop();
s.pop();
cout<< s.isEmpty();
return 0;
}
