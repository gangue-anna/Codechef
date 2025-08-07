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
