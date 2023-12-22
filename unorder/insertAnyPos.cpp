#include<iostream>
using namespace std;
void insertElement(int arr[], int&n, int position, int element){
    if(position>=n || position < 0){
        cout << "\n\nError: Out of range index value!" << endl;
    }
    else{
        for (int i = n; i > position; i--) {
            arr[i] = arr[i-1];
        }
        arr[position] = element;
        n++;
    }
}
int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    int size = 5, element , position;
    cout << "Enter your element for inserting: ";
    cin >> element;
    cout << "enter index for inserting element: ";
    cin >> position;

    cout << "Before insertion, array elements: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    
    insertElement(arr, size, position, element);

    cout << "\nAfter insertion, array elements: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }


    
    return 0;
}