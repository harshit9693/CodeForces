#include <bits/stdc++.h>
using namespace std;
using ll = long long int;

bool find_gp(ll x) {
    // Check for all possible cases
    for (ll r = 2; r <= sqrt(x); r++) {
        ll n = 3;
        ll sum = (pow(r, n) - 1) / (r - 1);

        while (sum <= x) {
            if (sum == x) return true;
            n++;
            sum = (pow(r, n) - 1) / (r - 1); // Update sum within the loop
        }
    }
    return false;
}

void solve() {
    ll sum;
    cin >> sum;

    if (sum < 7) {
        cout << "NO" << endl;
        return;
    }

    if (find_gp(sum)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
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
