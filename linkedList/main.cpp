#include <iostream>

using namespace std;


class Node{
private:
    int data;
    Node* next;
public:
    Node(){
        data=0;
        next = NULL;
    }
    Node(int d){
        data=d;
        next = NULL;
    }
    Node(int d,Node* n){
        data=d;
        next = n;
    }
    void setData(int x){
        data = x;
    }
    int getData(){
        return data;
    }
    void setNext(Node* x){
        next = x;
    }
    Node* getNext(){
        return next;
    }

};

class LinkedList{
private:
    Node* head;
public:
    LinkedList(){
        head = NULL;
    }
    void insartAtFront(int data){
        Node* n = new Node(data,head);
        head = n;
    }
    void insartAtBack(int data){
        Node* n = new Node(data);
        if(head == NULL){
            head = n;
        }else{
            Node* i;
            for(i=head;i->getNext()!= NULL; i=i->getNext()){
                ;
            }
            i->setNext(n);
        }
    }
    void printf(){
        Node* i;
            for(i=head;i->getNext()!= NULL; i=i->getNext()){
                cout<< i->getData() << endl;
            }
            cout<< i->getData() << endl;
    }
};

int main()
{
    LinkedList l;
    l.insartAtBack(5);
    cout<< "insart at back(5)" << endl;
    l.printf();
    l.insartAtFront(10);
    cout<< "insart at front(10)" << endl;
    l.printf();
    l.insartAtBack(20);
    cout<< "insart at back(20)" << endl;
    l.printf();
    return 0;
}
