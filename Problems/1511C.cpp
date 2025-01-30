#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    ll n, q;
    cin >> n >> q;

    vector<ll> deck(n);
    for (ll i = 0; i < n; i++) {
        cin >> deck[i];
    }

    vector<ll> queries(q);
    for (ll i = 0; i < q; i++) {
        cin >> queries[i];
    }

    // Use a map to store the position of the first occurrence of each color.
    vector<ll> pos(51,-1);
    for (ll i = 0; i < n; i++) {
        if (pos[deck[i]] == -1) {
            pos[deck[i]] = i + 1; // Store 1-based index.
        }
    }

    for (ll i = 0; i < q; i++) {
        ll color = queries[i];
        ll index = pos[color];

        // Print the position of the found card.
        cout << index << " ";

        // Update the deck by placing the queried card on top.
        // Adjust the map for positions of other cards.
        for (auto &p : pos) {
            if (p < index) {
                p++;
            }
        }
        pos[color] = 1;
    }
    cout << endl;
}

int main() {
    solve();
    return 0;
}
