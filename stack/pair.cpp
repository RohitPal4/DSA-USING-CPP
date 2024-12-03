#include<iostream>
#include<vector>
#include<algorithm>
#include<stack>
using namespace std;


    vector<int> asteroidCollision(vector<int>& asteroids) {
        int n = asteroids.size();
        stack<int> st;
        for(int i = 0; i<n; i++){
            if(!st.empty()){
                if(st.top()<0 && asteroids[i]<0){
                    st.push(asteroids[i]);
                }else if(st.top()>0 && asteroids[i]>0){
                    st.push(asteroids[i]);
                }else{
                    if(st.top()<0 && asteroids[i]>0){
                        while( !st.empty() && abs(st.top())<=asteroids[i]){
                            if(abs(st.top())==asteroids[i]){
                                st.pop();
                                break;
                            }
                            st.pop();
                        }
                    }else if(st.top()>0 && asteroids[i]<0){
                        while(!st.empty() && st.top()>=abs(asteroids[i])){
                            if(abs(st.top())==asteroids[i]){
                                st.pop();
                                break;
                            }
                            st.pop();
                        }
                    }
                }

            }else{
                st.push(asteroids[i]);
            }
        }

        vector<int> res;
        while(!st.empty()){
            int num = st.top();
            res.push_back(num);
            st.pop();
        }
        reverse(res.begin(), res.end());
        return res;
    }

int main() {
    vector<int> v;
    int n;
    cin >> n;
    for(int i =0; i<n; i++){
        cin>> v[i];
    }
    vector<int> res;
    res = asteroidCollision(v);

    for(auto e: res){
        cout << e << " ";
    }
    return 0;
}