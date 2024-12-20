#include <iostream>
using namespace std;
int binarySearch(int arr[],int size,int key){
    int low=0;
    int high=size-1;
    while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]==key)
          return mid;
        else if(key>arr[mid]){
            low=mid+1;
        }
        else
            high=mid-1;
    }
    return -1;

    }



int main()
{   int arr[]={10,20,30,40,50,60,70,80,90,100};
    cout<<binarySearch(arr,10,70);
    return 0;
}
