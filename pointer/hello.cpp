#include<iostream>
using namespace std;
void update(int *p){
    p = p+1;
   

}
int main() {
    int a = 5;
    int *p =&a;
    cout << "before :" << p << endl;
    update(p);
    cout << "after :" <<p <<endl;
        return 0;
}