#include<iostream>
using namespace std;
void insert(int arr[], int&n, int element){
    for (int i = n; i >0; i--) {
        arr[i]=arr[i-1];

    }
    arr[0] = element;
    n++;
}

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    int n = 5, element;
    cin >> element;
    // insert(arr, n, element);
    arr[n]=element;
    n++;

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}