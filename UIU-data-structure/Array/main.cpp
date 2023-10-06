#include<stdio.h>

int main(){

    int arr[5],i;
    int size_of_arr = sizeof(arr)/sizeof(arr[0]);

    printf("\nEnter array elements: \n");
    for(i=0;i<size_of_arr;i++){
        scanf("%d",&arr[i]);
    }
    arr[size_of_arr+1]=10;
    size_of_arr++;
    for(i=0;i<size_of_arr;i++){
        printf("\n%d ",arr[i]);
    }

}
