#include <iostream>
#include <cstring>
using namespace std;

void reverseString(char name[], int n) {
    int s = 0;
    int e = n - 1;
    while (s < e) {
        char temp = name[s];
        name[s] = name[e];
        name[e] = temp;
        s++;
        e--;
    }
}

void printReverseString(char name[], int n) {
    for (int i = 0; i < n; i++) {
        cout << name[i];
    }
}

int main() {
    char name[100]; // Adjust the size as needed

    cout << "Enter your name: ";
    cin >> name;

    int n = strlen(name);

    reverseString(name, n);

    printReverseString(name, n);

    return 0;
}
