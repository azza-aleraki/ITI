#include <iostream>
using namespace std;

class Stack {
private:
    int* arr;
    int tos;
    int size;

public:
    Stack(int s) {
        size = s;
        tos = -1;
        arr = new int[size];
    }

    ~Stack() {
        delete[] arr;
    }

    Stack(const Stack& s) {
        size = s.size;
        tos = s.tos;
        arr = new int[size];
        for (int i = 0; i <= tos; i++) {
            arr[i] = s.arr[i];
        }
    }

    Stack& operator=(const Stack& s) {
        if (this != &s) {
            delete[] arr;
            size = s.size;
            tos = s.tos;
            arr = new int[size];
            for (int i = 0; i <= tos; i++) {
                arr[i] = s.arr[i];
            }
        }
        return *this;
    }
    Stack operator+(const Stack& s) {
        Stack bigStack(this->size + s.size+10);
        int i = 0;

        for (; i <= tos; i++) {
            bigStack.push(arr[i]);
        }
        for (int j = 0; j <= s.tos; j++) {
            bigStack.push(s.arr[j]);
        }

        return bigStack;
    }
    void push(int n) {
        if (tos < size - 1) {
            tos++;
            arr[tos] = n;
        } else {
            cout << "Stack Is Full\n";
        }
    }
    int pop() {
        if (tos != -1) {
            int n = arr[tos];
            tos--;
            return n;
        } else {
            cout << "Stack is Empty\n";
            return 0;
        }
    }

    void display() {
        if (tos == -1) {
            cout << "Stack is Empty\n";
        } else {
            cout << "Stacked items: ";
            for (int i = 0; i <= tos; i++) {
                cout << arr[i] << " ";
            }
            cout << endl;
        }
    }
};

/*void myFun1(Stack stack) {
    cout << "By Value: " << stack.pop() << endl;
}
void myFun1(Stack &stack) {
    cout << "By Reference: " << stack.pop() << endl;
}
void myFun1(Stack* stack) {
    cout << "By Pointer: " << stack.pop() << endl;
}*/

int main() {
    Stack stack1(5);
    stack1.push(10);
    stack1.push(20);
    stack1.push(30);
    Stack stack2(5);
    stack2.push(40);
    stack2.push(50);
    Stack stack4(5);
    stack4 = stack1;
    stack4.display();
    Stack stack3 = stack1 + stack2;
    stack3.display();


    return 0;
}

