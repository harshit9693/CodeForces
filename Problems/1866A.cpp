#include <bits/stdc++.h>
using namespace std;
using ll = long long;


void solve() {
    ll n;
    cin>>n;
    ll mini = INT_MAX;
    for(int i=0;i<n;i++){
      ll x;
      cin>>x;
      mini = min(mini,abs(x));
    }
    cout<<mini<<endl;
    
}

int main() {
    int t = 1;
    // cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}
