#include <iostream>
#define queue_size 3
using namespace std;

int q[queue_size+1];
int f=0,r=0;//front,rear

void enqueue(int item){
    int s=(r+1)%(queue_size+1);//checker for empty space
    if(s==f){
        cout<<"\nQueue is full!"<<endl;
    }else{
        r=s;//if "r" become equal to "f" after traversing, queue will destroy/empty.
            //that is why we increase "s" to check if it is equal to "f" or not.
        q[r]= item;
    }
}

void dequeue(){
    if(f==r){
        cout<<"\nQueue is empty!"<<endl;
    }else{

        f = (f+1)%(queue_size+1);
    }
}

void printQueue(){

    for(int i=f+1;i<=r;i++){

        cout<<q[i]<<" ";
    }
}


int main()
{
    dequeue();
    //f=0 r=0
    enqueue(10);//r,s=1
    enqueue(20);//r,s=2
    enqueue(30);//r,s=3
    enqueue(40);//s+1%queue_size+1->(4%4) = 0 therefor (r==f) q is full!

    dequeue();


    printQueue();
    return 0;
}
