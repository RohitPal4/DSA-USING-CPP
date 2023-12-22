/*#include<iostream>
using namespace std;
int main() {
    int a = 10;
    int *p = &a;
    cout << a  << endl;
    cout << a++ << endl;
    cout << p << endl;
    cout << *p << endl;
    cout << *p << endl;
    int *q = p;
    cout << q << endl;
    cout << *q << endl;

    return 0;
}*/

// arr[i] = *(arr+1)

// i[arr] = *(i+arr) this is also right impletation

#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int arr[5] = {1, 2, 3, 2, 1};
    int *ptr = &arr[0];

    for (int i = 0; i < 5; i++) {
        bool isDuplicate = false;
        
        for (int j = 0; j < 5; j++) {
            if (i != j && *(ptr + i) == *(ptr + j)) {
                isDuplicate = true;
                break;
            }
        }

        if (!isDuplicate) {
            cout << "Index: " << i << "\nValue: " << *(ptr + i) << endl;
        }
    }

    return 0;
}
