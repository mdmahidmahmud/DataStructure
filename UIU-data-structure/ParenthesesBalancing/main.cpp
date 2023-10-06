#include <iostream>

using namespace std;
struct myStack{
    char data[1000];
    int size_of_stack;
    int top;
};
myStack stack1;

bool isEmpty(){
    if(stack1.top == -1){
        return true;
    }else{
        return false;
    }
}
bool isFull(){
    if(stack1.top+1 == stack1.size_of_stack){
        return true;
    }else{
        return false;
    }
}
void push(char x){
    if(isFull()==false){
        stack1.top++;
        stack1.data[stack1.top]= x;
    }else{
        cout<<"Stack Overflow!"<<endl;
    }
}
char pop(){
    if(isEmpty()==false){
        stack1.top--;
        return stack1.data[stack1.top];
    }else{
        cout<<"Stack Underflow!"<<endl;
    }
}
/*
{()}
for loop starts here
stack-push /{,(/
--check is stack empty or not--
stack-pop for ')' stack-> /{/
--check is stack empty or not--
stack-pop for '}' stack-> /empty/
loop ended
if stack == empty expression is valid.

{()]]
for loop starts here
stack-push /{,(/
--check is stack empty or not--
stack-pop for ')' stack-> /{/
--check is stack empty or not--
stack-pop for ']' stack-> /{/
--check is stack empty or not--
stack-pop for ']' stack-> /{/
loop ended
Now, stack is not empty that means expression is not valid.

}}}}
for loop starts here
stack-> /empty/
--check is stack empty or not--
stack-pop for '}' return -> false
loop ended
if stack is empty return false because expression is not valid.
*/

bool isBalanced(string s){
    for(int i=0;i<s.size();i++){
        if(s[i]=='('||s[i]=='{'||s[i]=='['||s[i]=='<'){
            push(s[i]);
           }else if(s[i]==')'){
                //if stack is empty return false
                if(!isEmpty() && stack1.data[stack1.top]=='('){
                    pop();
                   }else{
                       return false;
                       break;
                   }
           }else if(s[i]=='}'){
                //if stack is empty return false
                if(!isEmpty() && stack1.data[stack1.top]=='{'){
                    pop();
                   }else{
                       return false;
                       break;
                   }
           }
           else if(s[i]==']'){
                //if stack is empty return false
                if(!isEmpty() && stack1.data[stack1.top]=='['){
                    pop();
                   }else{
                       return false;
                       break;
                   }
           }
           else if(s[i]=='>'){
                //if stack is empty return false
                if(!isEmpty() && stack1.data[stack1.top]=='<'){
                    pop();
                   }else{
                       return false;
                       break;
                   }
           }
    }
    //
    if(isEmpty()==false){
        return false;
    }else{
        return true;
    }
}
int main(){

    string s = "[{((<>))}]";
    stack1.size_of_stack = 10;
    stack1.top = -1;

    if(isBalanced(s)== true){
        cout<<"Expression is balanced."<<endl;
    }else{
        cout<<"Expression is not balanced!"<<endl;
    }


    return 0;
}
