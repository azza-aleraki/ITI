#include <iostream>
#include <cstring>
using namespace std;
class String {
    char* arr;
    int size;
public:
    String() {
        size = 10;
        arr = new char[size];
        strcpy(arr, "AZZa");

    }
    String(int _size) {
        size = _size;
        arr = new char[size];
        strcpy(arr, "Eman");
    }
    String(char* str) {
        int len = strlen(str);
        size = len + 10;
        arr = new char[size];
        strcpy(arr, str);
    }

    String(String& obj) {
        size = obj.size;
        arr = new char[size];
        strcpy(arr, obj.arr);
    }

    ~String() {
        delete[] arr;
    }
    void setName( char* str) {
        int len = strlen(str);
        if (len + 1 > size) {
            delete[] arr;
            size = len + 10;
            arr = new char[size];
        }
        strcpy(arr, str);
    }

    const char* getName() const {
        return arr;
    }

    String operator=(const String& obj) {
        if (this == &obj) {
            return *this;
        }
        delete[] arr;
        size = obj.size;
        arr = new char[size];
        strcpy(arr, obj.arr);
        return *this;
    }

    String operator+(const String& other) const {
        int newSize = size + other.size - 1;
        String result(newSize);
        strcpy(result.arr, arr);
        strcat(result.arr, other.arr);
        return result;
    }

    void print() const {
        cout << arr << endl;
    }
};

int main() {
    String s1;
    String s2(10);
    String s3("Hello");
    s1.print();
    s2.print();
    s3.print();
    s3=s1+s2;
    s3.print();
    s1=s2;
    s1.print();


    return 0;
}
