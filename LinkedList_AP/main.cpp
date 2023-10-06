#include <iostream>

using namespace std;

class Node{
private:
    int data;
    Node* next;
public:
    Node(){
        data=0;
        next=NULL;
    }
    Node(int x){
        data=x;
        next=NULL;
    }
    Node(int x, Node* nxt){
        data=x;
        next=nxt;
    }
    int getData(){
        return data;
    }
    void setData(int x){
        data = x;
    }
    void setNext(Node* nxt){
        next=nxt;
    }
    Node* getNext(){
        return next;
    }
};

class LinkedListGenerator{
private:
    Node* head;
public:
    LinkedListGenerator(){
        head = NULL;
    }
    void insertAtFront(int x){
        Node* n = new Node(x,head);
        if(head==NULL){
            head = n;
        }else{
            head = n;
        }
    }
    void insertAtBack(int x){
        Node* n = new Node(x);
        if(head==NULL){
            head = n;
        }else{
            Node* i;
            for(i=head;i->getNext()!=NULL;i=i->getNext()){
                ;
            }
            i->setNext(n);
        }

    }
    void display(){
        Node* i;
        i=head;
        while(i!=NULL){
            cout<<i->getData()<<" ";
            i=i->getNext();
        }
    }
};


int main(){

    LinkedListGenerator l;
    l.insertAtFront(10);
    l.insertAtFront(20);
    l.insertAtFront(30);
    l.insertAtBack(5);
    l.display();
}











/*
#include <iostream>

using namespace std;

class Node{
private:
    int data;
    Node* next;
public:
    Node(){
        data = 0;
        next = NULL;
    }
    Node(int x){
        data = x;
        next = NULL;
    }
    Node(int x,Node* nxt){
        data = x;
        next = nxt;
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

class linkedListGenerator{
private:
    Node* head;
public:
    linkedListGenerator(){
        head= NULL;
    }

    void insertAtFront(int x){
        Node* temp = new Node(x,head);
        if(head==NULL){
            head = temp;
        }
        head = temp;
    }
    void insertAtBack(int x){
        Node* n = new Node(x);
        if(head==NULL){

            head = n;
        }else{
            Node* i;
            for(i=head;i->getNext()!= NULL;i=i->getNext()){
                ;
            }
            i->setNext(n);

        }

    }
    void display(){
        Node* temp;
        temp=head;

        /*
        while(temp!=NULL){
            cout<<temp->getData()<<" ";
            temp=temp->getNext();
        }
        */

        /*
        30 20 10 NULL
        temp =30;temp->getNext()!=NULL(t);temp=temp->getNext()=20
        print(30)
        temp =20;temp->getNext()!=NULL(t);temp=temp->getNext()=10
        print(20)
        temp =10;temp->getNext()!=NULL(f);
        --------------------------------------
        cout<<temp->getData()<<" ";
        print(10)


        for(temp=head;temp->getNext()!=NULL;temp=temp->getNext()){
            cout<<temp->getData()<<" ";
        }
        cout<<temp->getData()<<" ";

    }
};

int main()
{
   linkedListGenerator l;
   l.insertAtFront(10);
   l.insertAtFront(20);
   l.insertAtFront(30);
   l.insertAtBack(5);
   l.display();
    return 0;
}
*/








