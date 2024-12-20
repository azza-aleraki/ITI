#include <iostream>
#include<cstring>
using namespace std;
void swap (char*a ,char*b){
    char temp[20];
    strcpy(temp,a);
    strcpy(a,b);
    strcpy(b,temp);
}
void selectionSort(char arr[][20],int size){
    int i=0 ,min=0;
    for(i=0;i<size-1;i++){
            min=i;
    for(int j =i+1;j<size;j++){
        if(strcmp(arr[min],arr[j])>0)
            min=j;
    }
    if (min != i)
        swap(arr[i],arr[min]);

}}

int main()
{
    char arr[3][20]={"banana","apple","gauva"};
    selectionSort(arr,3);

    for(int i=0;i<3;i++){
        cout<<arr[i]<<endl;
    }

    return 0;
}
