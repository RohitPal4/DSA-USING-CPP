#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    int arr[100][100] = {0};  // Initialize the array with zeros
    
    // Fill the array with values
    for(int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            if (j == 1 || j == i) {
                arr[i][j] = 1;
            } else {
                cout << " j value " << j << endl;
                 arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
            }
        }
    }

    // Display the Pascal's Triangle
    for(int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
