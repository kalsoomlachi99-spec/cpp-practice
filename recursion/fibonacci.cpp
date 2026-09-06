#include <iostream>

using namespace std;

int fib(int n){ // TC : O(2^n) , SC O(1)

    if(n == 0 || n == 1)  return n;

    return fib(n-1) + fib(n-2);
}

int main() {
    
    /*nth Fibonacci using recursion*/
    
    /*TC = total no of calls * work done in each call
    SC = Dept of reccursive tree * memory used in each call*/

    int n = 6;

    cout << n << "th fibonacci: " << fib(n) << endl;

    return 0;
}
