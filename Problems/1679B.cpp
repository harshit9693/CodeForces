#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ll n, q;
    cin >> n >> q;

    ll sum = 0, reset = -1; // `sum` tracks the sum, `reset` tracks type-2 query values
    set<ll> updatedIndices; // Tracks indices updated after a type-2 query
    vector<ll> a(n); // Array to store elements

    // Input array and calculate initial sum
    for (ll i = 0; i < n; i++) {
        cin >> a[i];
        sum += a[i];
        updatedIndices.insert(i); // Initially, all indices are treated as individually set
    }

    for (ll i = 0; i < q; i++) {
        ll t;
        cin >> t;

        if (t == 1) {
            ll idx, x;
            cin >> idx >> x;
            --idx; // Convert 1-based index to 0-based

            // Determine current value at `idx` (either `a[idx]` or `reset`)
            ll currentValue = (updatedIndices.count(idx) ? a[idx] : reset);

            // Update sum and array value
            sum += (x - currentValue);
            a[idx] = x;
            updatedIndices.insert(idx); // Mark `idx` as individually updated
        } 
        else if (t == 2) {
            ll x;
            cin >> x;

            // Apply reset logic
            reset = x;
            updatedIndices.clear(); // Clear the set since all values are uniform
            sum = n * x;
        }

        // Output current sum after the query
        cout << sum << endl;
    }

    return 0;
}
