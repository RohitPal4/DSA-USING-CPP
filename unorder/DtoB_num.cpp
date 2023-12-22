#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cout << "Enter a decimal number: ";
    cin >> n;

    vector<int> binary;

    if (n < 0) {
        // Convert negative number to positive
        n = -n;

        while (n > 0) {
            int bit = n % 2;
            binary.push_back(bit);
            n = n / 2;
        }

        // Perform one's complement
        for (int i = 0; i < binary.size(); i++) {
            binary[i] = 1 - binary[i];
        }

        cout << "Binary representation: 1";
    } else if (n == 0) {
        // Special case for zero
        binary.push_back(0);
        cout << "Binary representation: 0";
    } else {
        // Positive number
        while (n > 0) {
            int bit = n % 2;
            binary.push_back(bit);
            n = n / 2;
        }

        cout << "Binary representation: ";
    }

    // Print the binary digits
    for (int i = binary.size() - 1; i >= 0; i--) {
        cout << binary[i];
    }

    cout << endl;

    return 0;
}


// it is not complete
