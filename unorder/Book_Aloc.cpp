// book allocation
//time complexity O(n*logn)
// space complexity O(1)
# include<iostream>
# include<vector>
using namespace std;
bool isPossible(vector<int> arr, int n, int m, int mid){
    int studentCount = 1;
    int pageSum = 0;

    for (int i = 0; i < n; i++) {
        if(pageSum+arr[i]<=mid){
          pageSum+=arr[i];  
        }
        else{
            studentCount++;
            if(studentCount>m || arr[i]>mid){
                return false;
            }
            pageSum = arr[i];
        }
    }
    return true;
}
int allocation(vector<int>arr, int n, int m){
    int s =0;
    int sum =0;
    int ans = -1;
    for(int i=0; i<n; i++){
        sum += arr[i];
    }
    int e = sum;
    int mid;
    while(s<=e){
        mid =  s+(e-s)/2;

      if(isPossible(arr,n,m,mid)){
        ans = mid;
        e = mid-1;
      }
      else{
        s = mid+1;
      }  
    }
    return ans;
}
int main(){
    int m;
    cin >> m;
    int n;
    cin >> n;
    vector<int>arr(n);
    for(int i = 0; i<n; i++){
        cin >> arr[i];
    }
    cout << allocation(arr, n, m) << endl;
    return 0;
}