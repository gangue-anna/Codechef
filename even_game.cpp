/*
Even Sum

There are N integers in an array A.

Two players take turns alternatively in placing signs (+ or -) before them,
and then they all are added. The sign can be placed before any element
of the array that has not been assigned a sign yet.
All elements must be assigned a sign.

Player 1 wins if the resulting sum is even,
else Player 2 wins. Find out who shall win if they both play optimally.

Input:
- First line will contain T, number of testcases.
- Then T testcases follow.
- Each testcase contains 2 lines of input:
    - First line contains a single integer N, size of the array.
    - Second line contains N space separated integers A1, A2, ..., AN.

Output:
- For each testcase, output in a single line:
  "1" if the first person wins or "2" if the second person wins.

Constraints:
1 ≤ T ≤ 10
1 ≤ N ≤ 10^5
1 ≤ Ai ≤ 10^9

Sample Input:
3
2
1 2
3
1 1 2
3
1 2 4

Sample Output:
2
1
2

Explanation:
Case 1:
Regardless of what player 1 does, player 2 can always make the final sum odd.
So player 2 always wins.

Case 2:
Player 1 can choose signs to make the final sum even. So player 1 wins.

Case 3:
Same as Case 1, player 2 can always ensure an odd result. So player 2 wins.
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	vector<int> arr;
	
	for(int i = 0; i < t; i++){
	    int n;
	    cin >> n;
	    arr.clear();
	    
	    for(int j = 0; j < n; j++){
	        int x;
	        cin >> x;
	        arr.push_back(x);
	    }
	    
	    int odd = 0;
	    for(int k = 0; k < arr.size(); k++){
	        if(arr[k] % 2){
	            odd += 1;
	        }
	    }
	    
	    if(odd % 2){
	        cout << "2" << endl;
	    }
	    else{
	        cout << "1" << endl;
	    }
	}

}
