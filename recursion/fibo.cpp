#include <iostream>
using namespace std;

int fibonacci(int n) {
    if (n <= 1) {
        return n;
    }
    
    return fibonacci(n - 1) + fibonacci(n - 2);
}


    // int fib(int n) {
    //     if (n <= 1) {
    //         return n;
    //     }
        
    //     int prev1 = 0;
    //     int prev2 = 1;
    //     int current = 0;
        
    //     for (int i = 2; i <= n; i++) {
    //         current = prev1 + prev2;
    //         prev1 = prev2;
    //         prev2 = current;
    //     }
        
    //     return current;
    // }


int main() {
    int n;
    cin >> n;
    cout << "your fibonacci series is: ";
    for(int i = 0; i<=n; i++){

    
    int ans = fibonacci(i);
    cout << ans << " ";
    }
    
    return 0;
}
