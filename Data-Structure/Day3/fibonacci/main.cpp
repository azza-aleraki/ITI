#include <iostream>
using namespace std;
int fibonacci(int n){
    if(n==0)
        return 0;
    else
        return n+fibonacci(n-1);
}

int main()
{   int fib=fibonacci(5);
    cout<<fib;
    return 0;
}
