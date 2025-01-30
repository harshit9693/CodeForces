#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll totalSubtrees = 0;

// Function to perform DFS and calculate black and white counts
//we are returning a pair from each node such that it returns the total number of blacks and whites in that subtree
pair<ll, ll> dfs(ll node, map<ll, vector<ll>> &mp, string &s) {
    ll black = 0, white = 0;

    // Count the color of the current node
    if (s[node - 1] == 'B') {
        black++;
    } else {
        white++;
    }

    // Perform DFS on the children of the current node
    for (auto child : mp[node]) {
        pair<ll,ll> childCounts = dfs(child, mp, s);
        black += childCounts.first;
        white += childCounts.second;
    }

    // Check if the current subtree has equal black and white nodes
    if (black == white) {
        totalSubtrees++;
    }

    return {black, white};
}

void solve() {
    ll n;
    cin >> n;

    vector<ll> arr(n - 1);
    for (ll i = 0; i < n - 1; i++) {
        cin >> arr[i];
    }

    string s;
    cin >> s;

    // Build the tree as an adjacency list
    map<ll, vector<ll>> mp;
    ll node = 2;
    for (ll i = 0; i < n - 1; i++) {
        mp[arr[i]].push_back(node);
        node++;
    }

    // Reset the total subtree count
    totalSubtrees = 0;

    // Perform DFS starting from the root node (node 1)
    dfs(1, mp, s);

    // Output the total number of subtrees with equal black and white nodes
    cout << totalSubtrees << endl;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}
