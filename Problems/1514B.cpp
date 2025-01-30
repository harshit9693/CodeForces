#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    ll n, k;
    cin >> n >> k;

    int mod = 1e9+7;
    int res = 1;

    for(int i=0;i<k;i++){   //we are traversing a loop k times since 2^k-1 has exaclty k bits where as 2^k has (k+1) bits 
    //and for each bit we have to choose the one 0 from n number which will result in nC1 times k
      res = (res*n)%mod;
    }
    cout<<res<<endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
