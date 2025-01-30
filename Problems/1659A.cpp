#include <bits/stdc++.h>
using ll = long long;
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        ll n, r, b;
        cin >> n >> r >> b;

        string result;
        ll redGroups = b + 1;  // Number of segments of 'R' to distribute
        ll minRedsPerGroup = r / redGroups;  // Minimum 'R's per group
        ll extraReds = r % redGroups;  // Extra 'R's to distribute

        for (ll i = 0; i < redGroups; i++) {
            // Add the minimum number of 'R's for this group
            result.append(minRedsPerGroup, 'R');

            // Distribute one extra 'R' if we have any left
            if (extraReds > 0) {
                result.push_back('R');
                extraReds--;
            }

            // Add a 'B' after this group if it's not the last group
            if (i < b) {
                result.push_back('B');
            }
        }

        cout << result << endl;
    }

    return 0;
}
