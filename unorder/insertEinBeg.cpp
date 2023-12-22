#include<iostream>
using namespace std;

// insert element in the begining 

void insertElementInBegin(int arr[], int& n, int element) {
    for(int i = n; i > 0; i--) {
        arr[i] = arr[i - 1];
    }
    arr[0] = element;
    n++; 
}

// insert element in last position of the array

void insertElementInLast(int arr[], int& n, int element){
    arr[n] = element;
    n++;
}



int main() {
    int arr[6] = {1, 2, 3, 4, 5};
    int size = 5, element;

    cout << "Enter your element for insertion: ";
    cin >> element;

    cout << "Before insertion, array elements: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }

    insertElementInBegin(arr, size, element);

    cout << "\nAfter insertion, array elements: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }

    insertElementInLast(arr, size, element);

    cout << "\nAfter insertion, array elements: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }


    return 0;
}
