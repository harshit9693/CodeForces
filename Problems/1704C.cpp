#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    ll n, k;
    cin >> n >> k;
    vector<ll> arr(k);
    for (ll i = 0; i < k; i++) {
        cin >> arr[i];
    }

    // Sort the positions to calculate gaps correctly
    sort(arr.begin(), arr.end());

    vector<ll> diff;

    // Gap between the last position and the first position wrapping around the array
    diff.push_back(n - arr[k - 1] + arr[0] - 1);

    // Gaps between consecutive positions
    for (ll i = 0; i < k-1; i++) {
        diff.push_back(arr[i+1] - arr[i] - 1);
    }

    // Sort gaps in descending order
    sort(diff.rbegin(), diff.rend());

    ll totalCount = 0, day = 0;

    // Calculate the total number of people that can be saved
    for(ll i=0;i<diff.size();i++){
      ll curr = diff[i];
      curr -= 2*day;
      if(curr<=0){
        break;
      }
      totalCount+=curr-1;
      if(curr == 1){
        totalCount++;
      }
      day+=2;
    }

    cout << n-totalCount << endl;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}
