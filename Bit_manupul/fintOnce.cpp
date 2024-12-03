#include<iostream>
#include <map>
using namespace std;
// first method 
int findSingleNumber(int arr[]){
    int n = 7;

    map<int, int> m;
    for(int i =0; i<n-1; i++){
        m[arr[i]]++;
    }
    for(auto it: m){
        if(it.second == 1){
            return it.first;
        }
    }
}

// second method


int main() {
        int arr[] = {5, 5, 5, 7, 4, 4, 4};
    cout << findSingleNumber(arr) << endl;
    
    
    return 0;
}