#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    string s;
    cin >> s;

    int n = s.length();

    // Edge case: All '0's string
    if (count(s.begin(), s.end(), '1') == 0) {
        cout << 0 << endl;
        return;
    }
    // Edge case: All '1's string
    if (count(s.begin(), s.end(), '1') == n) {
        cout << (ll)n * n << endl; // Using long long to handle overflow
        return;
    }

    // Identify longest contiguous segment of '1's in cyclic manner
    int maxLen = 0, currentLen = 0;

    // Check for contiguous '1's in a cyclic manner
    for (int i = 0; i < 2 * n; i++) {
        if (s[i % n] == '1') {
            currentLen++;
            maxLen = max(maxLen, currentLen);
        } else {
            currentLen = 0;
        }
    }

    // Maximum product calculation
    ll maxLenWithSplit = (ll)(maxLen + 1); // Ensure calculations use long long
    ll part1 = maxLenWithSplit / 2;
    ll part2 = maxLenWithSplit - part1;

    cout << part1 * part2 << endl; // Product uses long long
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}
