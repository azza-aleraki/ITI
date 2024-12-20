#include <iostream>
using namespace std;

void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}
void bubbleSort(int* a, int size) {
    int swapped, i, j;
    for (i = 0; i < size - 1; i++) {
        swapped = 0;
        for (j = 0; j < size - i - 1; j++) {
            if (a[j] > a[j + 1]) {
                swap(a[j], a[j + 1]);
                swapped = 1;
            }
        }
        if (!swapped) {
            break;
        }
    }
}
int main() {
    int arr[] = {8, 9, 4, 3, 1, 7, 5};
    int size = 7;
    bubbleSort(arr, size);
    for (int i = 0; i < size; i++) {
        if (i != size - 1) {
            cout << arr[i] << ", ";
        } else {
            cout << arr[i];
        }
    }
    cout << endl;
    return 0;
}
