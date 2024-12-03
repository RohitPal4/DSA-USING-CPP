#include <iostream>
#include<vector>
using namespace std;

// Setting a Bit: How to set a particular bit to 1.

int setting_a_bit(int n, int i){
    return n|(1<<i);
}

// Clearing a Bit: How to set a particular bit to 0.

int Clearing_a_bit(int n, int i){
    return n&~(1<<i);
}

// Toggling a Bit: How to flip the value of a bit

int Toggling_a_bit(int n, int i){
    return n^(1<<i);
}

//Checking a Bit: How to check if a particular bit is 0 or 1

bool Checking_a_bit(int n, int i){
    return n&(1<<i);
}

//Counting Bits: How to count the number of 1s or 0s in a binary number

int Counting_bits(int n){
    int count = 0;
    while(n!=0){
        n=n&(n-1);
        count++;
    }
    return count;
}

// Masking: Using masks to isolate specific bits

int Masking_bits(int n, int mask){
    return n&mask;
}

// checking a number is  power of 2 or not 

bool checkingPo2(int n){
    return (n&(n-1))==0;
}

// swaping two numbers without using temporally variable 
void swaping_numbers(int &a, int &b){
    a = a^b;
    b=a^b;
    a = a^b;
}

// checking a number is odd or even 
int checkbits(int n){
    int i=0;
    while(n!=0){
        n=n&n-1;
        i++;
    }
    return i;
}


// int checkdetb(int n){
//     return n&(1<<2)
// }


int setithbit(int n, int i){
    return n|(1<<i);


}

int clearith(int n, int i){
    return n^(1<<i);
}

// int toggle(int n, int i){

// }

// 2. N light bulbs are connected by a wire. Each bulb has a switch associated with 
//it, however due to faulty wiring, a switch also changes the state of all the bulbs
// to the right of current bulb. Given an initial state of all bulbs, Find the minimum 
//number of switches you have to press to turn on all the bulbs. You can press the same 
//switch multiple times.

// Note: 0 represents the bulb is off and 1 represents the bulb is on.

// Examples:

// Input: A[] = [0 1 0 1]
// Output: 4

// Input: A[] = [1,0,0,0,0]
// Output: 1

int minSwitchesToTurnOnBulbs(vector<int>& A) {
    int count = 0;
    int n = A.size();
    
    for (int i = 0; i < n; ++i) {
        
        if (A[i] ==0){
            count++;
            for (int j = i; j < n; ++j){
                A[j] = 1 - A[j];
            }
        }
    }
    
    return count;
}
int minSwitchesToTurnOnBulbs(vector<int>& A) {
    int count = 0;
    int toggleCount = 0;
    int n = A.size();
    
    for (int i = 0; i < n; ++i) {
        // Determine the actual state of the current bulb
        int actualState = A[i] ^ (toggleCount % 2);
        
        // If the actual state is off, we need to press the switch
        if (actualState == 0) {
            count++;
            toggleCount++;
        }
    }
    
    return count;
}
int solve(vector<int>&v){
    
    for(int i=0; i<v.size()-1; i++){
        
        if(v[i]==0 && v[i+1]==1){
            v[i+1] = 0;
        }
        
    }
    int c =0;
    for(int i =0; i<v.size(); i++){
        if(v[i] == 0){
            c++;

        }
    }
    return c;

}



int addDigits(int num) {
        while(num>=10){
        int ans =0;
        int temp = num;
            while(temp!=0){
                int r = temp%10;
                ans = ans+r;
                temp /= 10;
            }
            
            num = ans;
        }
        return num;
        
    }

int main(){
   int n;
   cin >> n;
   vector<int> arr(n);
   for(int i=0; i<n; i++){
    cin >> arr[i];
   }

   cout<< minSwitchesToTurnOnBulbs(arr) << endl;

    return 0;
}


//1009
// 231
// 7
// 258
// 136
