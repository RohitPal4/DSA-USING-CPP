#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        // bool p = false;
        // for(int i=1; i<6; i=i+2){
        //     if(s[i]=='A' && s[i]=='E' && s[i]=='I' && s[i]=='O' || s[i]=='U'){
        //         p = true;
        //     }
            
        // }
        // if (!p) {cout << "No" << endl; continue;} 
        // for(int i=0; i<s.length(); i++){
        //     if(i==1 || i==3 || i==5 ){
        //         continue;
        //     }
        //     else{
        //         if(s[i]!='A' && s[i]!='E' && s[i]!='I' && s[i]!='O' && s[i]!='U'){
        //             p = true;
        //         }
        //         else {
        //             p=false;
        //             break;
        //         }
        //     }
        // }
        bool p = true;
        for (int i=0; i<8; i++) {
            if (i==3 || i==1 || i==5) {
                if(s[i]!='A' && s[i]!='E' && s[i]!='I' && s[i]!='O' && s[i]!='U') {
                    p=false;
                    break;
                }
            }
            else {
                if(s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U'){
                    p=false;
                    break;
                }
            }
        }
        if(p){
            cout << "yes" << endl;
        }
        else{
            cout << "no" << endl;
        }
    }
    return 0;
}
