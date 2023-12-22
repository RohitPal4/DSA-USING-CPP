// #include <iostream>
// using namespace std;
// int main() {
//     int arr[10] = {5, 7, -2, 10, 22, -2, 0, 5, 22, 5};
//     int target = -2;
//     bool found = false;
//     int count = 0;
//     for (int i = 0; i < 10; i++) {
//         if(arr[i] == target){
//             found = true;
//             count ++;
//         }
//     }

//     if(found){
//         cout << "present" << endl;
//         cout << count << endl;
//     }
//     else{
//         cout << "not present" << endl;
//     }
//     return 0;
// }

#include <iostream>
using namespace std;
bool search(int arr[], int size, int key){
    for (int i = 0; i < size; i++) {
        if(arr[i] == key){
            return 1;
        }
    }
    return 0;

}
int main() {
    int arr[10] = {5, 7, -2, 10, 22, -2, 0, 5, 22, 5};
    int key;
    cout << "Enter your key: ";
    cin >> key;
    bool found = search(arr, 10, key);
    if(found){
        cout << "key is present " << endl;
    }
    else{
        cout << "key is not present" << endl;
    }

    return 0;
}