#include <iostream>
#include <string>

using namespace std;

int main() {
    string arr[10] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    int n;
    cin >> n;
    int rev = 0;
    if(n==0){
        cout << arr[0] << endl;
    }

    while (n != 0) {
        int rem = n % 10;
        rev = rev * 10 + rem;
        n /= 10;
    }
    
        while (rev != 0) {
            int digit = rev % 10;
            cout << arr[digit] << " ";
            rev /= 10;
        }

    return 0;
}


// #include <iostream>
// #include <string>

// std::string convertToWords(int number) {
//     std::string words[] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
//     std::string result;
//     while (number > 0) {
//         int digit = number % 10;
//         result = words[digit] + " " + result;
//         number /= 10;
//     }
//     return result;
// }

// int main() {
//     int number;
//     std::cout << "Enter a number: ";
//     std::cin >> number;

//     std::string words = convertToWords(number);
//     std::cout << "In words: " << words << std::endl;

//     return 0;
// }
