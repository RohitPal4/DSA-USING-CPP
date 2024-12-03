// #include<iostream>
// #include<map>
// #include<vector>
// #include<string>
// using namespace std;

// int main() {
//     cout << "Enter your string: " << endl;
//     string s;
//     cin >> s;
//     int n;
//     cout << "enter n: " << endl;
//     cin >> n;
//     vector<string> d(n);
//     cout << "Enter your dic strings" << endl;
//     for(int  i = 0; i<n; i++){
//         cin >> d[i];
//     }

// int maxc = 0;
// string ans = "No Word";
//         int n1 = s.length();
//     for(int i =0; i<n; i++){
// int c =0;

//         string m = d[i];
//         int n2 = m.length();
//         int x = min(n1, n2);
//         if(s==m) continue;

//         for(int j = 1; j<=x; j++){
//             if(s[n1-j] == m[n2-j]){
//                 c++;
//             }else{
//                 break;
//             }
//         }
//         if(c>maxc){
//             maxc = c;
//             ans = m;

//         }

//     }
//     cout << ans << endl;

//     return 0;
// }


#include <iostream>
#include <map>
#include <vector>
#include <string>
using namespace std;

int main() {
    cout << "Enter  string: "<<endl;
    string s;
    cin >> s;
    int n;
    cout << "enter n:" <<endl;
    cin >> n;
    vector<string> d(n);
    cout << "Enter your strings" <<endl;
    for (int i = 0; i < n; i++) {
        cin >> d[i];
    }

    int n1 = s.length();
    map<int, vector<string>>ump;

    for (int i =0; i < n; i++){
        int c =0;
        string m =d[i];
        int n2 = m.length();
        int x = min(n1, n2);
        if (s == m) continue;

        for (int j = 1; j <= x; j++){
            if (s[n1-j] == m[n2-j]){
                c++;
            }else{
               break;
            }
        }

        if (c >0){
        ump[c].push_back(m);
        }
    }

    if (ump.empty()){
        cout <<"No Word"<<endl;
    } 
    else{
        auto it =ump.rbegin();
        cout << it->second[0] <<endl;
    }

    return 0;
}
