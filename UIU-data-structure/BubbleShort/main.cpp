#include <iostream>

using namespace std;

int main(){
    int i,j,data[4]={6,9,3,4};
    int n = sizeof(data)/sizeof(data[0]);
    cout<< "Array size: " << n << endl;
    /*
    [6,9,3,4]
    i=0 j=0 data[j(6)]>data[j+1(9)] f
    [6,9,3,4]No swapping
    i=0 j=1 data[j(9)]>data[j+1(3)] t
    [6,3,9,4]
    i=0 j=2 data[j(9)]>data[j+1(4)] t
    [6,3,4,|9]
    ----------------------------------
    [6,3,4,9]
    i=1 j=0 data[j(6)]>data[j+1(3)] t
    [3,6,4,9]
    i=1 j=1 data[j(6)]>data[j+1(4)] t
    [3,4,|6,9]
    -----------------------------------
    [3,4,6,9]
    i=2 j=0 data[j(3)]>data[j+1(4)] f
    [3,|4,6,9]No Swapping
    */

    //(i<n-1) also valid logic | here,i=0;i<=4-2;i++ | therefor, max = 2
    for(i=0;i<=n-2;i++){
        /*
        i=0 j<n-i-1 j++ (2<4-0-1)max
        i=1 j<n-i-1 j++ (1<4-1-1)max
        i=2 j<n-i-1 j++ (0<4-2-1)max
        */
        for(j=0;j<n-i-1;j++){
            if(data[j]>data[j+1]){
                int temp = data[j];
                data[j] = data[j+1];
                data[j+1] = temp;
            }
        }
    }
    cout << "\n--Array after sorting--\n";
    //printing sorted array
    for(i=0;i<n;i++){
        cout << data[i] << " ";
    }

    return 0;
}
