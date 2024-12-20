#include <iostream>
using namespace std;
int binarySearch(int arr[],int high,int low,int key){
    if(low>high)
        return -1;
    int mid=(high+low)/2;

    if(key==arr[mid])
        return mid;

    else if(key<arr[mid])
        return binarySearch(arr,mid-1,low,key);
    else
        return binarySearch(arr,high,mid+1,key);

}

int main()
{
    int arr[]={10,20,30,40,50,60,70,80,90,100};
    cout<<binarySearch(arr,9,0,80);
    return 0;
}
