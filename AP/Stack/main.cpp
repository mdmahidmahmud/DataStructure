#include<iostream>
using namespace std;

class Stack {
private:
    int top;
    char array[1000];
public:
    Stack(){
        top = 0;
    }
    void push(char x){
        array[top] = x;
        top++;
    }

    char pop(){
        top--;
        return array[top];
    }

    char peek(){
        return array[top-1];
    }

    bool isEmpty(){
        if(top == 0){
            return true;
        }
        else {
            return false;
        }
    }
};

bool isBalanced(string s){
    Stack myStack;
    for(int i = 0; i < s.size(); i++){
        if(s[i] == '('){
            myStack.push('(');
        }
        else {
            myStack.pop();
        }
    }

    if(myStack.isEmpty()){
        return true;
    }
    else {
        return false;
    }
}

int main(){
    int n;
    string s;
    cin >> n;
    getline(cin,s);
    for(int i = 0; i < n; i++){
        getline(cin,s);
        if(isBalanced(s)){
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
