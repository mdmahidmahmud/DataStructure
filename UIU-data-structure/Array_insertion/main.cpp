#include<stdio.h>

int main()
{
    //Declaration of a array[50] & array size "n"[will be defined by user]
    //& "item" item to insert in the array
    int arr[50],n,i,item;

    printf("\nEnter array size: \n");
    scanf("%d",&n);//Getting array size from user
    //Initializing the array
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    printf("\n\n--Before insertion--\n\n");
    //Printing array elements before insertion
    for(i=0;i<(n);i++){
        printf("%d ",arr[i]);
    }

    printf("\nEnter item to insert.\n");
    scanf("%d",&item);//Getting data from user to insert in the array

    int position;
    /*
    item = 35
    arr[10,20,30,40,50]
    35<10---f
    35<20---f
    35<30---f
    35<40---t so, position will be 3
    -------------------------------------
    When we try to insert data at the end of an array.
    item = 60
    arr[10,20,30,40,50]
    60(item)<arr[0]10---f
    60(item)<arr[1]20---f
    60(item)<arr[2]30---f
    60(item)<arr[3]40---f
    60(item)<arr[4]50---f
    so, position will be undefined
    */
    for(i=0;i<n;i++){
        if(item<arr[i]){
            position = i;
            break;//It is vary important to break the loop execution !
        }
    }

    printf("\nPosition: %d\n",position);
    /*
    here,n=5,item = 25
    arr[10,20,30,40,50]
    (n-1(4))>= position(3)---t
    (n-1(3))>= position(3)---t
    (n-1(2))>= position(3)---t
    (n-1(1))>= position(3)---f

    */
    for(i=(n-1);i>=position;i--){
            arr[i+1]= arr[i];//array size has already been set at 50
    }

    arr[position]=item;//inserting item in correct position

    n++;//The value of n increased by 1 because an extra item inserted
    //in the array
    printf("\n\n--After insertion--\n\n");
    //Printing array elements after insertion
    for(i=0;i<n;i++){
        printf("%d ",arr[i]);
    }

    return 0;
}
