#include <iostream>
using namespace std;

int integerSqrt(int n) {
    if (n == 0 || n == 1)
        return n;

    int start = 1, end = n, ans = 0;

    while (start <= end) {
        int mid = start + (end - start) / 2;

        if (mid <= n / mid) {  // avoid overflow: use mid <= n / mid instead of mid*mid <= n
            ans = mid;         // store the answer and move right to find a larger one
            start = mid + 1;
        }
        else {
            end = mid - 1;     // mid*mid > n → move left
        }
    }

    return ans;
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    cout << "Integer part of sqrt(" << n << ") is " << integerSqrt(n) << endl;
    return 0;
}
