#include<iostream>
#include<vector>
#include<stack>
using namespace std;
int main() {
    int n;
    cin >> n;

    vector<int> arr;
    for(int i =0; i<n; i++){
        cin >> arr[i];
    }

    stack<int> st;
    st.push(-1);
    vector<int> ans(n, -1);
    
    for(int i = n-1; i>=0; i--){
        if(st.top()<arr[i]){
            ans[i] = st.top();
            st.push(arr[i]);
        }
        else{
            while(st.top()>arr[i]){
                st.pop();
            }
            ans[i] = st.top();
            st.push(arr[i]);
        }
    }
   
   for(auto e: ans){
    cout << e << " " << endl;
   }
    return 0;
}