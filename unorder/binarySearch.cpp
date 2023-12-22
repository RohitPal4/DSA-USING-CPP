// first and last position of a shorted array
# include<iostream>
using namespace std;
int firstocc(int arr[], int n, int key){
    int s =0, e = n-1;
    int mid =  s+(e-s)/2;
    int ans = -1;
    while(s<=e){
      if(arr[mid]==key){
         ans = mid;
         e =  mid - 1;
      }
      else if(key > arr[mid]){
          s = mid + 1;

      } 
      else if(key < arr[mid]){
           e = mid - 1;
      }
      mid = s + (e-s)/2; 
    }
    return ans;
}

int lastocc(int arr[], int n, int key){
    int s =0, e = n-1;
    int mid =  s+(e-s)/2;
    int ans = -1;
    while(s<=e){
      if(arr[mid]==key){
         ans = mid;
         s =  mid + 1;
      }
      else if(key > arr[mid]){
          s = mid + 1;

      } 
      else if(key < arr[mid]){
           e = mid -1;
      }
      mid = s + (e-s)/2; 
    }
    return ans;
}
int main() {
    int e[6] = {1, 2, 3, 3, 3, 5};
    cout << "first occurence of  3 is: " << firstocc(e, 6, 3) << endl;
    cout  << "last occurence of 3 is: " << lastocc(e, 6, 3) << endl;
    return 0;
}