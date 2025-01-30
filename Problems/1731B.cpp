#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll mod_exp(ll base, ll exp, ll mod) {
    ll result = 1;
    while (exp > 0) {
        if (exp % 2 == 1) {
            result = (result * base) % mod;
        }
        base = (base * base) % mod;
        exp /= 2;
    }
    return result;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        ll n;
        cin >> n;
        ll mod = 1e9 + 7;

        // Precompute modular inverses of 6 and 3
        ll inv6 = mod_exp(6, mod - 2, mod); // Modular inverse of 6
        ll inv3 = mod_exp(3, mod - 2, mod); // Modular inverse of 3

        // Calculate sum of squares of first n natural numbers
        ll sum1 = (n % mod) * ((n + 1) % mod) % mod;
        sum1 = (sum1 * ((2 * n + 1) % mod)) % mod;
        sum1 = (sum1 * inv6) % mod;

        // Calculate sum of the sequence of downward movements
        n--;
        ll sum2 = (n % mod) * ((n + 1) % mod) % mod;
        sum2 = (sum2 * ((n + 2) % mod)) % mod;
        sum2 = (sum2 * inv3) % mod;

        // Calculate total sum
        ll total = (sum1 + sum2) % mod;

        // Multiply by 2022 and output the result
        cout << (2022 * total) % mod << endl;
    }

    return 0;
}
