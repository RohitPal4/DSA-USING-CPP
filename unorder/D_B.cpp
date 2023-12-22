# include<iostream>
#include<vector>

using namespace std;
int main() {
  vector<int> binary;
  int n;
  cin >> n;
  while(n>0){
    int bit = n%2;
    binary.push_back(bit);
    n /=2;
  }
if(binary.empty()){
  cout << "0" << endl;
}
else{
  for(int i = binary.size()-1; i>=0; i--){
    cout << binary[i];
  }
}

return 0;

}