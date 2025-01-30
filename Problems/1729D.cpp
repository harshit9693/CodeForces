#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
  ll n;
  cin >> n;
  vector<ll> a(n), b(n);
  
  // Read input arrays
  for (ll i = 0; i < n; i++) {
    cin >> a[i];
  }
  for (ll i = 0; i < n; i++) {
    cin >> b[i];
  }

  vector<ll> pos, neg;
  
  // Calculate the differences between b[i] and a[i]
  for (ll i = 0; i < n; i++) {
    ll diff = b[i] - a[i];
    if (diff < 0) {
      neg.push_back(diff);  // Store negative differences
    } else {
      pos.push_back(diff);  // Store positive differences
    }
  }

  // Sort the positive differences in ascending order
  sort(pos.begin(), pos.end());
  // Sort the negative differences in descending order (more negative to less negative)
  sort(neg.rbegin(), neg.rend());

  ll j = 0, negPair = 0;
  
  // Try to pair negative differences with positive differences
  for (ll i = 0; i < neg.size(); i++) {
    // Try to find a positive number such that pos[j] + neg[i] >= 0
    while (j < pos.size() && pos[j] + neg[i] < 0) {
      j++;
    }
    // If there's a valid positive, pair them and increment negPair
    if (j < pos.size() && pos[j] + neg[i] >= 0) {
      negPair++;
      j++;
    }
  }

  // Total count of valid pairs
  ll totalCount = negPair + (pos.size() - negPair) / 2;
  cout << totalCount << endl;
}

int main() {
  int t;
  cin >> t;

  while (t--) {
    solve();
  }
  return 0;
}
