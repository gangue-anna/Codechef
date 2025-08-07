#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;

    int cum1 = 0, cum2 = 0;
    int winner = 0, maxLead = 0;

    for (int i = 0; i < N; i++) {
        int S, T;
        cin >> S >> T;

        cum1 += S;
        cum2 += T;

        int lead = abs(cum1 - cum2);
        int currentLeader = (cum1 > cum2) ? 1 : 2;

        if (lead > maxLead) {
            maxLead = lead;
            winner = currentLeader;
        }
    }

    cout << winner << " " << maxLead << endl;
}
