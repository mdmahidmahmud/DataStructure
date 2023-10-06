#include <iostream>

using namespace std;

void arraySorter(int data[],int array_size){
    int i,j;
    int n = array_size;
    /*
    [6,2,5,8]
    i=o j=0 j>j+1 t
    [2,6,5,8]
    i=o j=1 j>j+1 t
    [2,5,6,8]
    i=o j=2 j>j+1 f
    [2,5,6|,8]No swapping
    ---------------------
    [2,5,6,8]
    i=1 j=0 j>j+1 f
    [2,5,6,8]No swapping
    i=1 j=1 j>j+1 f
    [2,5,|6,8]No swapping
    ----------------------
    [2,5,6,8]
    i=2 j=0 j>j+1 f
    [2,|5,6,8]No swapping
    */

    //bubble sort algorithm
    for(i=0;i<n-1;i++){
        for(j=0;j<n-i-1;j++){
            if(data[j]>data[j+1]){
                int temp = data[j];
                data[j] = data[j+1];
                data[j+1] = temp;
            }
        }
    }
}

int binarySearch(int data[],int array_size,int item){
    int n = array_size;
    int i,low=0,high=n-1,mid;

    /*
    <--Case 1-->
    item = 8
    [6,2,5,8]

    low=0 high=3 mid=(0+3)/2=1
    mid==item(f);mid>item(f);mid<item(t)
    low = mid+1
    low=2 high=3 mid=(2+3)/2=2
    mid==item(f);mid>item(f);mid<item(t)
    low = mid+1
    low=3 high=3 mid=(3+3)/2=3
    mid==item(t);mid>item(f);mid<item(f)
    return 1/found

    <--Case 2-->
    item = 6
    [6,2,5,8]

    low=0 high=3 mid=(0+3)/2=1
    mid==item(f);mid>item(f);mid<item(t)
    low = mid+1
    low=2 high=3 mid=(2+3)/2=2
    mid==item(f);mid>item(f);mid<item(t)
    low = mid+1
    low=3 high=3 mid=(3+3)/2=3
    mid==item(f);mid>item(t);mid<item(f)
    high=mid-1
    low=3 high=2 mid=(3+3)/2=3
    if low>high
        return 0/not found

    */
    //when low <= high Searching will continue
    //if low > high item not found
    int flag;
    while(low<=high){
        mid = (low+high)/2;
        if(data[mid]==item){
            flag= 1;
            break;
        }else if(data[mid]>item){
            high = mid-1;
        }else if(data[mid]<item){
            low = mid+1;
        }
    }
    if(low>high){
        flag = 0;
    }
    return flag;
}

int main()
{
    int i,data[100],item;
    int n = sizeof(data)/sizeof(data[0]);

    //inserting random value in the array
    for(i=0;i<n;i++){

        data[i] = rand()%1000+1;
    }

    //function call
    arraySorter(data,n);

    cout <<"\n--Array Elements--"<<endl;
    //printing sorted array elements
    for(i=0;i<n;i++){

        cout<< data[i]<<" ";
    }

    //getting item from user to search
    cout<<"\n\nEnter item to search: "<<endl;
    cin>> item;

    int flag = binarySearch(data,n,item);//function call
    if(flag!= 0){
        cout << "\n\nFound!"<<endl;
    }else{
        cout << "\n\nNot found!"<<endl;
    }


    return 0;
}
