#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    ll n, k;
    cin >> n >> k;
    string s;
    cin >> s;

    vector<int> freq(26, 0);  // Initialize frequency array for 26 letters
    for (char c : s) {
        freq[c - 'a']++;
    }

    // Count the number of odd frequencies
    int oddCount = 0;
    for (int count : freq) {
        if (count % 2 != 0) {
            oddCount++;
        }
    }

    // Check oddCount with k+1
    if (oddCount > k + 1) {
        cout << "NO" << endl;
    } else {
        cout << "YES" << endl;
    }
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}
