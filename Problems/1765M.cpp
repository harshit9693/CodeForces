#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        long long n;
        cin >> n;

        if (n % 2 == 0) {
            // If n is even, split it into two equal halves
            cout << n / 2 << " " << n / 2 << endl;
            continue;
        }

        // If n is odd, find divisors
        long long a = 1, b = n - 1; // Default values for prime numbers
        for (long long i = 2; i * i <= n; i++) {
            if (n % i == 0) {
                // Found a divisor, set a and b
                a = n / i;
                b = n - a;
                break;
            }
        }

        cout << a << " " << b << endl;
    }
    return 0;
}

