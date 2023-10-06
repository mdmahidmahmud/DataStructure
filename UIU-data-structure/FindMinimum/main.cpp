#include <iostream>
using namespace std;
int main()
{
    int i,data[4] = {7,6,9,4};
    //Declaring first index of array as min value.
    int min_value = data[0];

    for(i=2;i<4;i++){
        if(data[i]<min_value){
            min_value = data[i];
        }
    }

    cout<< "Minimum Value: "<< min_value << endl;

    return 0;
}
