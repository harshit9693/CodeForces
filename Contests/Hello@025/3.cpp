#include <bits/stdc++.h>
using namespace std;
using ll = long long;

// Function to find the triplet (a, b, c) that maximizes (a ^ b) + (b ^ c) + (a ^ c)
void findMaxXORTriplet(ll l, ll r, tuple<ll, ll, ll> &triplet) {
    ll maxSum = 0;

    // Iterate over all triplets in the range [l, r]
    for (ll a = l; a <= r; ++a) {
        for (ll b = a; b <= r; ++b) {
            for (ll c = b; c <= r; ++c) {
                // Calculate the sum (a ^ b) + (b ^ c) + (a ^ c)
                ll currentSum = (a ^ b) + (b ^ c) + (a ^ c);

                // Update the triplet if a new maximum is found
                if (currentSum > maxSum) {
                    maxSum = currentSum;
                    triplet = {a, b, c};
                }
            }
        }
    }
}

void solve() {
    ll l, r;
    cin >> l >> r;

    tuple<ll, ll, ll> triplet;
    findMaxXORTriplet(l, r, triplet);

    cout << get<0>(triplet) << ", " << get<1>(triplet) << ", " << get<2>(triplet) << endl;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}
