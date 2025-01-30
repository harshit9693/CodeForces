#include<bits/stdc++.h>
using ll = long long;
using namespace std;

// Function to find the smallest prime number greater than or equal to a given number
ll next_prime(ll start) {
    while (true) {
        bool is_prime = true;
        for (ll i = 2; i * i <= start; ++i) {
            if (start % i == 0) {
                is_prime = false;
                break;
            }
        }
        if (is_prime) {
            return start;
        }
        ++start;
    }
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        ll d;
        cin >> d;

        // Find the first prime number greater than or equal to 1 + d
        ll p1 = next_prime(1 + d);

        // Find the next prime number greater than or equal to p1 + d
        ll p2 = next_prime(p1 + d);

        // The smallest number with at least 4 divisors is p1 * p2
        cout << p1 * p2 << endl;
    }

    return 0;
}
