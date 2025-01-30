#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    ll n;
    cin >> n;
    vector<pair<ll, ll>> arr(n);  // Pair to store value and original index

    for (ll i = 0; i < n; i++) {
        cin >> arr[i].first;
        arr[i].second = i;  // Store the original index
    }

    // Sort by value to group identical elements together
    sort(arr.begin(), arr.end());

    // Check if all elements are identical
    if (arr[0].first == arr[n - 1].first) {
        cout << "NO" << endl;
        return;
    }

    cout << "YES" << endl;

    // Connect the first element with all others of a different value
    vector<pair<int, int>> edges;
    int firstDistinct = 0;
    for (int i = 1; i < n; i++) {
        if (arr[i].first != arr[0].first) {
            edges.push_back({arr[0].second + 1, arr[i].second + 1});
            firstDistinct = i;
        }
    }

    // Connect all remaining identical elements to the first distinct element
    for (int i = 1; i < n; i++) {
        if (arr[i].first == arr[0].first) {
            edges.push_back({arr[firstDistinct].second + 1, arr[i].second + 1});
        }
    }

    // Output the edges
    for (auto& edge : edges) {
        cout << edge.first << " " << edge.second << endl;
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
