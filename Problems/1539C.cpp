#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    ll n, k, x;
    cin >> n >> k >> x;
    vector<ll> arr(n);
    for (ll i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Step 1: Sort the array
    sort(arr.begin(), arr.end());

    // Step 2: Calculate differences between consecutive elements exceeding x
    vector<ll> diff;
    for (ll i = 1; i < n; i++) {
        if (arr[i] - arr[i - 1] > x) {
            diff.push_back(arr[i] - arr[i - 1]);
        }
    }

    // Step 3: Sort the differences
    sort(diff.begin(), diff.end());
    ll totalCount = diff.size();  // Number of gaps that need stabilization

    // Step 4: Try to fill the gaps using `k` additional students
    ll i = 0;
    while (i < diff.size() && k > 0) {
        ll requiredStudents = (diff[i] - 1) / x;  // Students needed to fill this gap
        if (requiredStudents <= k) {
            k -= requiredStudents;  // Use these students
            totalCount--;          // Reduce the number of gaps
        } else {
            break;  // Not enough students to fill this gap
        }
        i++;
    }

    // Step 5: Output the number of groups
    cout << 1 + totalCount << endl;  // 1 for the initial group
}

int main() {
    solve();
    return 0;
}
