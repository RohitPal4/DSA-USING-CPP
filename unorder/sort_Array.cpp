// #include <iostream>
// # include<algorithm>
// using namespace std;
// int main() {
//     int arr[5] = {9, 3, 2, 4, 6};
//     for (int i = 0; i < 5; i++) {
//         sort(arr, arr+5);
//     } 
//     for (int i = 0; i < 5; i++) { // sort array in ascending order
//         cout << arr[i] << " ";
//     }

//     // for (int i = 5-1; i >=0; i--) {
//     //     cout << arr[i] << " ";  sort array in descending order
//     // }
//     return 0;
// }

#include <iostream>
using namespace std;

// void bubbleSort(int arr[], int size) {
//     for (int i = 0; i < size - 1; i++) {
//         for (int j = 0; j < size - i - 1; j++) {
//             // Compare adjacent elements
//             if (arr[j] > arr[j + 1]) {
//                 // Swap elements if they are in the wrong order
//                 int temp = arr[j];
//                 arr[j] = arr[j + 1];
//                 arr[j + 1] = temp;
//             }
//         }
//     }
// }

// selection sort

// void selectionSort(int arr[], int n) {
//     for (int i = 0; i < n - 1; i++) {
//         int minIndex = i;
//         for (int j = i + 1; j < n; j++) {
//             if (arr[j] < arr[minIndex]) {
//                 minIndex = j;
//             }
//         }
//         swap(arr[i], arr[minIndex]);
//     }
// }


// insertion sort 

void insertionsort(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;

        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }

        arr[j + 1] = key;
    }
}

int main() {
    int arr[] = {9, 3, 2, 4, 6};
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << size << endl;

    // bubbleSort(arr, size);
    // selectionSort(arr, size);
    insertionsort(arr, size);

    cout << "Sorted array in ascending order: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}

