#include <iostream>

using namespace std;

int main(){

    int i,j,data[4] = {7,6,4,9};
    //length calculation
    int n = sizeof(data)/sizeof(data[0]);
    cout<< "--Array before sorting--"<< endl;
    //printing unsorted array
    for(i=0;i<4;i++){

        cout<< data[i] << " ";
    }
    /*
    [7,6,4,9]
    i=o j=1 (i>j)7>6 t
    [6,7,4,9]
    i=o j=2 (i>j)6>4 t
    [4,7,6,9]
    i=o j=3 (i>j)4>9 f
    [4,7,6,9]No Swapping
    --------------------
    [4,7,6,9]
    i=1 j=2 (i>j)7>6 t
    [4,6,7,9]
    i=1 j=3 (i>j)6>9 f
    [4,6,7,9]No Swapping
    --------------------
    [4,6,7,9]
    i=2 j=3 (i>j)7>9 f
    [4,6,7,9]No Swapping
    ---------------------
    Here,i-max = n-2
        j-max = n-1
    */

    //here,(i<=n-2)&(j<=n-1) also valid condition
    for(i=0;i<n-1;i++){
        for(j=i+1;j<n;j++){
            //for descending order sorting(data[i]<data[j])
            //for ascending order sorting(data[i]>data[j])
            if(data[i]<data[j]){
                int temp = data[i];
                data[i] = data[j];
                data[j] = temp;
            }
        }
    }
    cout<< "\n--Array after sorting--"<< endl;
    //printing sorted array
    for(i=0;i<4;i++){

        cout<< data[i] << " ";
    }
    return 0;
}
