// #include<iostream>
// using namespace std;

// int getSum(int *arr, int n){
//     int sum = 0;
//     for (int i = 0; i < n; i++) {
//         sum += arr[i];
//     }
//     return sum;
// }
// int main() {
//     int n;
//     cin >> n;
    
//     int * arr = new int[n];

//     for (int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }

//     int ans = getSum(arr, n); 
//     cout << "sum of the entire array: " << ans << endl;
//     return 0;
// }

#include<iostream>
#include<unordered_map>
#include<unordered_set>
#include<vector>
using namespace std;

bool solve(int el, int k, unordered_map<int, unordered_set<int>>& us){
    if(us[k].find(el) != us[k].end()){
        return false;
    }
    return true;
}
int main() {
    int n, klsub;
    cin >> n >> klsub;
    vector<int>a(n);
    unordered_map<int, unordered_set<int>>us; 

    for(int i =0; i<n; i++){
        int x;
        cin >> x;
        a[i] = x;

    }

    for(int i =0; i<n; i++){
        int k =0;
        bool f = true;
        for(int j =i; j<klsub; j++){
            if(!solve(a[j], k, us)){
                f = false;
                break;
            }
            k++;
        }

        k =0;

        for(int j =i; j<klsub; j++){
            if(f == true){
                us[k].insert(a[j]);
                k++;
            }
        }
    }

    int sum = 0;

    for(auto s: us){
        for(auto e: s.second){
            sum += e;
        }
    }

    cout << sum << endl;


    return 0;
}