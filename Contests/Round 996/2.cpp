#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    ll n;
    cin >> n;
    vector<ll> arr(n), brr(n);

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++) {
        cin >> brr[i];
    }

    vector<ll> crr(n);
    for (int i = 0; i < n; i++) {
        crr[i] = arr[i] - brr[i];
    }

    int minind = -1;
    ll minval = LLONG_MAX;

    for (int i = 0; i < n; i++) {
        if (crr[i] < minval) {
            minind = i;
            minval = crr[i];
        }
    }

    bool flag = true;

    for (int i = 0; i < n; i++) {
        if (i != minind) {
            if (arr[i] + minval < brr[i]) {
                flag = false;
                break;
            }
        }
    }

    if (flag) {
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
