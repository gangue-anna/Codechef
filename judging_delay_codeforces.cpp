/*
You have recently been hired as a developer at CodeChef. Your first mission is to implement a feature that determines how many submissions were judged late during a contest.

There are N submissions, numbered 1 through N. For each valid submission i, it was:

Submitted at time Sᵢ (in minutes)

Judged at time Jᵢ (in minutes)

Note: Submitting and judging both take zero time.
Your task is to determine how many submissions had a judging delay of more than 5 minutes.

🧠 Input
The first line contains a single integer T — the number of test cases.

For each test case:

The first line contains a single integer N — the number of submissions.

The next N lines each contain two space-separated integers Sᵢ and Jᵢ.

📤 Output
For each test case, output a single line containing one integer —
the number of submissions that were judged more than 5 minutes after submission.

🔒 Constraints
1 ≤ T ≤ 100

1 ≤ N ≤ 100

1 ≤ Sᵢ ≤ Jᵢ ≤ 300

Sample Input
1
5
1 3
4 4
4 10
1 11
2 7

Sample Output
2

🔍 Explanation
For the 5 submissions:

Submission 1: Delay = 3 - 1 = 2 minutes ✅

Submission 2: Delay = 4 - 4 = 0 minutes ✅

Submission 3: Delay = 10 - 4 = 6 minutes ❌

Submission 4: Delay = 11 - 1 = 10 minutes ❌

Submission 5: Delay = 7 - 2 = 5 minutes ✅

Only submissions 3 and 4 were delayed more than 5 minutes, so the output is 2.
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    
    for(int i = 0; i < T; i++){
        int N;
        int res = 0;
        cin >> N;
        
        for(int j = 0; j < N; j++){
            int S = 0, J = 0;
            cin >> S >> J;
            if((J - S) > 5){
                res += 1;
            }
        }
        cout << res << endl;
    }

}
