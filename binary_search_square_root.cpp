#include <iostream>
using namespace std;

// Function to find the integer part of square root of n
int integerSqrt(int n) {
    // Edge cases: sqrt(0) = 0, sqrt(1) = 1
    if (n == 0 || n == 1)
        return n;

    int start = 1, end = n;
    int ans = 0; // This will store the final answer

    // Binary search loop
    while (start <= end) {
        // To avoid overflow, use this instead of (start + end) / 2
        int mid = start + (end - start) / 2;

        // Check if mid is a candidate for the answer
        // Instead of mid * mid <= n (which can overflow), we use:
        if (mid <= n / mid) {
            ans = mid;         // mid is valid, store it
            start = mid + 1;   // Try to find a bigger valid answer
        } else {
            end = mid - 1;     // mid*mid > n, move left
        }
    }

    // When the loop ends, ans holds the greatest integer such that ans*ans <= n
    return ans;
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    cout << "Integer part of sqrt(" << n << ") is " << integerSqrt(n) << endl;
    return 0;
}
