#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    // Function to return sum of upper and lower triangles of a matrix.
    vector<int> sumTriangles(const vector<vector<int> >& matrix, int n)
    {
        int upperSum = 0; // Initialize the sum of the upper triangle to 0
        int lowerSum = 0; // Initialize the sum of the lower triangle to 0

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                // If the element is in the upper triangle (j >= i), add it to upperSum
                if (j >= i) {
                    upperSum += matrix[i][j];
                }

                // If the element is in the lower triangle (j <= i), add it to lowerSum
                if (j <= i) {
                    lowerSum += matrix[i][j];
                }
            }
        }

        // Return a vector containing the sums of the upper and lower triangles
        return {upperSum, lowerSum};
    }
};

int main()
{
    int n;
    cout << "Enter the size of the square matrix: ";
    cin >> n;

    vector<vector<int>> matrix(n, vector<int>(n));

    cout << "Enter the elements of the matrix:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> matrix[i][j];
        }
    }

    Solution solution;
    vector<int> triangleSums = solution.sumTriangles(matrix, n);

    cout << "Sum of upper triangle: " << triangleSums[0] << endl;
    cout << "Sum of lower triangle: " << triangleSums[1] << endl;

    return 0;
}
