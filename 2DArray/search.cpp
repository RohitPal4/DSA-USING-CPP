#include<iostream>
using namespace std;

bool isPresent(int arr[][100], int row, int col, int target) {
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            if (arr[i][j] == target) {
                return true;
            }
        }
    }
    return false;
}

int main() {
    int row, col, target;
    cout << "Enter row & col of your array:";
    cin >> row >> col;

    int arr[row][100]; // Assuming a maximum column size of 100

    cout << "Enter elements of the array:" << endl;
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cin >> arr[i][j];
        }
    }

    cout << "Enter your searching element:";
    cin >> target;

    if (isPresent(arr, row, col, target)) {
        cout << "Present" << endl;
    }
    else {
        cout << "Not present" << endl;
    }

    return 0;
}
