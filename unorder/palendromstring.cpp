#include<iostream>
#include<cstring>
using namespace std;
bool ischeckpalendrom(char name[], int n){
    int s = 0;
    int mid = n/2;
    int e = n-1;

    while(s<mid){
        if(name[s]!=name[e]){
            return false;
            
        }
        s++;
        e--;

    }
    return true;

}
int main() {
     char name[20];
     cout << "enter your name :";
     cin >> name;
     int n = strlen(name);
     ischeckpalendrom(name, n);
     if(ischeckpalendrom(name, n)){
        cout << "palindrome" << endl;
     }
     else {
        cout << "not palindrome " << endl;
     }

    return 0;
}