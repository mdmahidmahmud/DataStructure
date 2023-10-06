#include <iostream>

using namespace std;

int main(){

    int i,data[100],item;
    int n = sizeof(data)/sizeof(data[0]);

    //inserting random number in the array
    for(i=0;i<n;i++){
        data[i] = rand()%100+1;
    }
    //printing array elements
    cout << "--Array elements--"<< endl;
    for(i=0;i<n;i++){
        cout << data[i] << " ";
    }
    //getting item from user to search item within array
    cout<<"\n\nEnter item to search: "<<endl;
    cin >> item;

    /*
    //strategy number 1
    int flag = 0;
    for(i=0;i<n;i++){
       if(data[i]==item){
            flag = 1;
            break;
       }
    }
    if(flag == 0){
        cout<<"\n\nNot Found !"<<endl;
    }else{
        cout<<"\n\nFound !"<<endl;
    }
    */

    /*
    [10,20,9,8,15]
    if,item = 8
        i = 3 & loop will break
    if, item = 10
        i= 0 & loop will break
    hence,
        if item not found -> i==n
    */

    //strategy number 2
    for(i=0;i<n;i++){
        if(data[i]==item){
            cout<<"\n\nFound !"<<endl;
            break;
        }
    }
    if(i==n){
        cout<<"\n\nNot Found !"<<endl;
    }

    return 0;

}
