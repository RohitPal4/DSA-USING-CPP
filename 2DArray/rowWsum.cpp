#include<iostream>
using namespace std;

 void rowWsum(int arr[][100], int row, int col) {
    int sum[row]= {0};
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
          sum[i] += arr[i][j];
        }
    }
    for (int i = 0; i < row; i++) {
        cout << sum[i] << endl;
    }
    
}

int main() {
    int row, col;
    cout << "Enter row & col of your array:";
    cin >> row >> col;

    int arr[row][100];

    cout << "Enter elements of the array:" << endl;
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cin >> arr[i][j];
        }
    }
    rowWsum(arr, row, col);

    return 0;
}
