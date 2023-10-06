#include <iostream>

using namespace std;

struct myStack {
    int a[100];
    int size_of_stack;
    int top;
};

myStack stack1;

bool is_full(){
    if(stack1.top+1==stack1.size_of_stack){
        return true;
    }else{
        return false;
    }
}
bool is_stack_empty(){
    if(stack1.top==-1){
        return true;
    }else{
        return false;
    }
}

void push(int x){
    if(is_full()==false){
        stack1.top++;
        stack1.a[stack1.top] = x;
    }else{
        cout<<"Stack overflow!"<<endl;
    }
}

void pop(){
    if(is_stack_empty()==false){
        stack1.top--;
    }else{
        cout<<"Stack underflow!"<<endl;
    }
}

void printStack(){
    for(int i = 0;i<=stack1.top;i++){
        cout<<stack1.a[i]<<" ";
    }
}

int main()
{
    stack1.size_of_stack = 5;
    stack1.top = -1;

    push(10);
    push(20);
    push(30);
    push(40);
    push(50);
    push(60);
    pop();
    pop();
    pop();
    pop();
    pop();
    pop();
    printStack();
    //cout<<stack1.a[stack1.top];// output = 0
    return 0;
}
