#include<iostream>
using namespace std;

class Node {
private:
    int data;
    Node* next;
public:
    Node(){
        data = 0;
        next = NULL;
    }

    Node(int d){
        data = d;
        next = NULL;
    }

    Node(int d, Node* x){
        data = d;
        next = x;
    }

    void setData(int x){
        data = x;
    }

    void setNext(Node* x){
        next = x;
    }

    int getData(){
        return data;
    }

    Node* getNext(){
        return next;
    }

};

class LinkedList {
private:
    Node* head;
public:
    LinkedList(){
        head = NULL;
    }

    void insertAtFront(int data){
        Node* n = new Node(data, head);
        head = n;
    }

    void insertAtBack(int data){
        Node* n = new Node(data);
        if(head == NULL){
            head = n;
        }
        else {
            Node* i;
            for(i=head; i->getNext() != NULL; i=i->getNext()){
                ;
            }
            i->setNext(n);
        }
    }

    void print(){
        Node* i;
        for(i=head; i->getNext() != NULL; i=i->getNext()){
            cout << i->getData() << endl;
        }
        cout << i->getData() << endl;
    }
};

int main(){
    LinkedList l;
    l.insertAtBack(5);
    cout << "Insert at BACK (5)" << endl;
    l.print();
    l.insertAtFront(10);
    cout << "Insert at FRONT (10)" << endl;
    l.print();
    l.insertAtBack(20);
    cout << "Insert at BACK (20)" << endl;
    l.print();
    return 0;
}
