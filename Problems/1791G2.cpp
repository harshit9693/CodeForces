#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    ll n, k;
    cin >> n >> k;

    vector<ll> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    vector<pair<ll, ll>> pre(n), suf(n);
    for (ll i = 0; i < n; i++) {
        pre[i] = {arr[i] + i + 1, i};   // Value with penalty based on index for prefix
        suf[i] = {arr[i] + n - i, i};  // Value with penalty based on reverse index for suffix
    }

    sort(pre.begin(), pre.end());
    sort(suf.begin(), suf.end());

    unordered_set<int> usedIndices;
    ll i = 0, total = 0, count = 0;
    pre.insert(pre.end(), suf.begin(), suf.end());

    sort(pre.begin(),pre.end());
    while(i<2*n){
      if(usedIndices.find(pre[i].second) == usedIndices.end()){
        if(total+pre[i].first<=k){
          total+=pre[i].first;
          count++;
          usedIndices.insert(pre[i].second);
        }
        else{
          break;
        }
      }
      i++;
    }
    cout<<count<<endl;
  }

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
