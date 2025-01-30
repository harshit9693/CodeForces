#include <bits/stdc++.h>
using namespace std;
using ll = long long int;

void solve() {
    ll n, w;
    cin >> n >> w;

    vector<ll> wt(n);
    for (ll i = 0; i < n; i++) {
        cin >> wt[i];
    }

    // Count the number of elements with each power of 2
    vector<ll> bits(32, 0);
    for (ll i = 0; i < n; i++) {
        ll num = wt[i];
        ll pow = 0;
        while (num > 1) {
            pow++;
            num >>= 1;
        }
        bits[pow]++;
    }

    ll height = 0;
    while (true) {
        ll temp = w;
        for (ll i = 31; i >= 0; i--) {
            while (bits[i] > 0 && temp >= (1LL << i)) {
                temp -= (1LL << i);
                bits[i]--;
            }
        }

        bool done = true;
        for (ll i = 0; i < 32; i++) {
            if (bits[i] > 0) {
                done = false;
                break;
            }
        }

        height++;
        if (done) {
            break;
        }
    }

    cout << height << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}
