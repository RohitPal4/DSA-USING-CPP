#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

// Function to check if it's possible to place 'k' cows with a minimum distance of 'mid' between them.
bool isPossible(vector<int>& stalls, int k, int mid) {
    int cowCount = 1;  // Start by placing the first cow at the first stall.
    int lastPos = stalls[0];  // Store the position of the last placed cow.
    
    for (int i = 1; i < stalls.size(); i++) {
        // Check if the distance between the current stall and the last placed cow is at least 'mid'.
        if (stalls[i] - lastPos >= mid) {
            cowCount++;  // If the distance is sufficient, place another cow.
            lastPos = stalls[i];  // Update the position of the last placed cow.
            
            if (cowCount == k) {
                return true;  // If all 'k' cows are placed, return true.
            }
        }
    }
    
    return false;  // If it's not possible to place all 'k' cows, return false.
}

// Function to find the maximum possible minimum distance between 'k' cows.
int aggressiveCows(vector<int>& stalls, int k) {
    sort(stalls.begin(), stalls.end());  // Sort the stalls in ascending order.

    int start = 0;  // Starting point for the binary search.
    int end = stalls[stalls.size() - 1] - stalls[0];  // Maximum possible distance between stalls.
    int ans = -1;  // Initialize the answer to keep track of the maximum distance.

    // Perform binary search to find the maximum possible minimum distance.
    while (start <= end) {
        int mid = start + (end - start) / 2;
        
        if (isPossible(stalls, k, mid)) {
            // If it's possible to place all 'k' cows with distance 'mid', update the answer.
            ans = mid;
            start = mid + 1;  // Look for larger values of 'mid'.
        } else {
            end = mid - 1;  // Look for smaller values of 'mid'.
        }
    }

    return ans;  // Return the maximum possible minimum distance.
}
int main() {
    int n, k;
    cin >> n >> k;
    vector<int> stalls(n);
    for (int i = 0; i < stalls.size(); i++) {
        cin >> stalls[i];
    }
    cout << "ANS =" << aggressiveCows( stalls, k) << endl;

}