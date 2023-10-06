#include <iostream>

using namespace std;

struct LinkedList{
    int data;
    LinkedList *next;
};

typedef struct LinkedList node;

void display(node *start){
    node *temp;
    temp = start;

    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}

int main()
{
    //struct LinkedList start;
    node *start,*temp,*prev;

    start = NULL;

    int ans;
    cout<<"Do you want to add data? Press \"1\" for \"yes\" else \"0\": "<<endl;
    cin>>ans;
    while(ans==1){
        if(start==NULL){
            start = new node;
            cout<<"Enter Data: "<<endl;
            cin>>start->data;
            start->next=NULL;
            prev = start;
        }else{
            temp=new node;
            cout<<"Enter Data: "<<endl;
            cin>>temp->data;
            temp->next=NULL;
            prev->next=temp;
            prev=temp;
        }
        cout<<"Do you want to add data? Press \"1\" for \"yes\" else \"0\": "<<endl;
        cin>>ans;

    }

    /*
    start = new node();
    start->data=10;

    temp = new node();
    temp->data=20;
    start->next=temp;

    temp = new node();
    temp->data=30;
    start->next->next=temp;

    temp = new node();
    temp->data=40;
    start->next->next->next=temp;
    temp->next=NULL;
    */

    display(start);

    //cout<<start->data<<" "<<start->next->data<<" "
    //<< start->next->next->data<<" "
    //<<start->next->next->next->data<<" "<<endl;
    //<<start->next->next->next->next->data;
    //int x = NULL;
    //cout<<"X:"<<x<<endl;
    //cout<<"Last node next:"<<start->next->next->next->next->data<<endl;

    return 0;
}
