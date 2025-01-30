#include <iostream>
#include <vector>
#include <algorithm>

using ll = long long;

int main() {
    ll t;
    std::cin >> t; // Number of test cases
    while (t--) {
        ll n;
        std::cin >> n; // Size of the array
        std::vector<std::pair<ll, ll>> a(n);

        // Reading input values and storing with their indices
        for (ll i = 0; i < n; i++) {
            std::cin >> a[i].first; // Value
            a[i].second = i;       // Index
        }

        // Sort the array by value while keeping track of indices
        std::sort(a.begin(), a.end());

        std::vector<ll> stop(n, 0); // To mark the breaking points
        ll cumulativeSum = a[0].first;

        // Mark stop points where cumulative sum is less than the next value
        for (ll i = 1; i < n; i++) {
            if (cumulativeSum < a[i].first) {
                stop[i - 1] = 1; // Mark the previous element as the last valid point
            }
            cumulativeSum += a[i].first;
        }

        // Determine the largest index from which all values can be included
        ll idx = n - 1;
        for (ll i = n - 1; i >= 0; i--) {
            if (stop[i]) {
                idx = i;
            }
            stop[i] = idx;
        }

        // Create a result array with original indices
        std::vector<ll> result(n);
        for (ll i = 0; i < n; i++) {
            result[a[i].second] = stop[i];
        }

        // Print the results
        for (ll i = 0; i < n; i++) {
            std::cout << result[i] << " ";
        }
        std::cout << "\n";
    }

    return 0;
}
