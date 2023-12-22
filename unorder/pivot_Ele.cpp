// find pivot element in array
/*# include<iostream>
# include<vector>
using namespace std;
int findPivotElement(vector<int>&arr){
    
    int n = arr.size(), s =0, e = n-1, mid;
    while(s<e){
        mid = s + (e-s)/2;
        if(arr[mid]>=arr[0]){
            s = mid + 1;
        }
        else{
            e = mid;
        }
    }
    return s;
}
int main() { 
   int n;
   cin >> n;
   vector<int> arr(n);
   for (int i = 0; i < n; i++) {
    cin >> arr[i];
   }
   cout << arr[findPivotElement(arr)] << endl;

    return 0;
}
*/

// Suggest Edit
// You have been given a sorted array/list 'arr' consisting of 'n'elements. You are also given an integer 'k'.
// Now the array is rotated at some pivot point unknown to you.
// For example, if 'arr' = [ 1, 3, 5, 7, 8], then after rotating 'arr' at index 3, the array will be 'arr' = [7, 8, 1, 3, 5].
// Now, your task is to find the index at which 'k' is present in 'arr'.
// Note:
# include<iostream>
# include<vector>
using namespace std;
int search(vector<int>& arr, int n, int k) {
    int s = 0, e = n - 1;

    while (s <= e) {
        int mid = s + (e - s) / 2;

        if (arr[mid] == k) {
            return mid; // Element found, return the index
        }

        if (arr[s] <= arr[mid]) {
            // Left half is sorted
            if (k >= arr[s] && k < arr[mid]) {
                e = mid - 1;
            } else {
                s = mid + 1;
            }
        } else {
            // Right half is sorted
            if (k > arr[mid] && k <= arr[e]) {
                s = mid + 1;
            } else {
                e = mid - 1;
            }
        }
    }

    return -1; // Element not found
}

int main(){
    int n, k;
    cin >> k >> n;

    vector<int>arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << search(arr, n, k) << endl;
    
}