#include<iostream>
#include<algorithm>
using namespace std;
int main() {
    int arr[5] = {1, 2, 3, 5, 5};
    sort(arr, arr+5);
   cout << arr[3];
    return 0;
}