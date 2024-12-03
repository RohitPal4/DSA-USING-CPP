#include <iostream>
#include<map>

using namespace std;

int main() {
   int s;
   map<int, int> m;
   for(int i = 0; i<5; i++){
    cin >> s;
    m[s] = m[s] + 3;
   }
   for (auto x: m) {
    cout << x.first << " - " << x.second << endl;
   }

// s = 10;
// cout << s++ << endl;
// cout << s << endl;

    return 0;
}