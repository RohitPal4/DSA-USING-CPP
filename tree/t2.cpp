#include<iostream>
#include<vector>

using namespace std;
bool solve(int num){
    for(int i=0; i<num/2; i++){
        if(i*i==num){
            return true;
            break;
        }
    }
    return false;
}
int main() {
    int n;
    cin  >> n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin >>arr[i]; 
    }
    int ans =0;
    for(int i=0; i<n; i++){
    
            int num = arr[i];
            if(solve(num)){
                ans++;
            }
    }
    cout << ans << endl;
    return 0;
}