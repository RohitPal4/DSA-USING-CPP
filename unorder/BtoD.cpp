# include<iostream>
# include<cmath>
#include<vector>

using namespace std;
int main() {
  vector<int> binary;
  int n;
  cin >> n;
  while(n>0){
    int bit = n%10;
    binary.push_back(bit);
    n /=10;
  }
if(binary.empty()){
  cout << "0" << endl;
}
else{
    int ans =0;
  for(int i = binary.size()-1; i>=0; i--){
    ans += binary[i]*pow(2, i);
  }
  cout << ans << endl;
}

return 0;

}