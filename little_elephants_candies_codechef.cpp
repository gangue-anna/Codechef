#include <bits/stdc++.h>
using namespace std;

int main() {
	int T;
	cin >> T;
	
	int N = 0, C = 0;
	vector<int> arr;
	
	for (int i = 0; i < T; i++){
	    cin >> N >> C;
	    arr.clear();
	    
	    for (int j = 0; j < N; j++){
	        int x;
	        cin >> x;
	        arr.push_back(x);
	    }
	    int sum = accumulate(arr.begin(), arr.end(), 0);
	    
	    if(sum <= C){
	        cout << "Yes" << endl;
	    }
	    else{
	        cout << "No" << endl;
	    }
	}

}
