// # include<iostream>
// using namespace std;
// int main(){
//     int size;
//     cin >> size;
//     int num[100];
//     for(int i =0; i < size; i++){
//         cin >> num[i];
//     }
//     int max = num[0];
//     int min = num[0];
//     for (int i = 0; i < size; i++) {
//         if(num[i]>max){
//             max = num[i];
//         }
//         if(num[i]<min){
//             min = num[i];
//         }
//     }
//     cout << "Max number : " << max << endl;
//     cout << "Min Number : " << min << endl;
//     return 0;
// }

#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int size;
    cin >> size;
    int num[100];
    for(int i = 0; i < size; i++){
        cin >> num[i];
    }
    
    int max = *max_element(num, num + size);
    int min = *min_element(num, num + size);
    
    cout << "Max number: " << max << endl;
    cout << "Min number: " << min << endl;
    
    return 0;
}

