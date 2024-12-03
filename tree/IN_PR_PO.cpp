#include<iostream>
using namespace std;
int main() {
    int arr[] = {3, 3, 4,9, 5};
    int n =5;
    for(int i =n-1; i>0; i--){
       int j = i-1;
       while(j>=0 && arr[i]<arr[j]){
        int temp = arr[i];
         arr[i] = arr[j];
         arr[j] = temp;
         j = j-1;
       } 
    }
    for(int i =0; i< n; i++){
        cout << arr[i] << " ";
    }
    return 0;
}