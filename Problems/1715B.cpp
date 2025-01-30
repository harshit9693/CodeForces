#include <cstdio>
typedef long long ll;

int main() {
    long t;
    scanf("%ld", &t); // Read the number of test cases

    while (t--) {
        ll n, k, b, s;
        scanf("%lld %lld %lld %lld", &n, &k, &b, &s); // Read the input values for each test case

        // Calculate the minimum and maximum possible values for the required beauty `b`
        long mn = (s - (n - 1) * (k - 1)) / k; // Minimum value of `b` based on the sum `s`
        long mx = s / k;                      // Maximum value of `b` achievable with the given `s`

        // If `b` is not within the valid range, output -1 and skip to the next test case
        if (b < mn || mx < b) {
            puts("-1");
            continue;
        }

        // Calculate the first element to ensure the beauty condition is satisfied
        ll cur = b * k + k - 1; // Maximum value for the first element
        cur = (s < cur) ? s : cur; // Adjust `cur` if the remaining sum `s` is less than `cur`
        printf("%lld ", cur); // Print the first element

        // Calculate the remaining sum after allocating the first element
        ll rem = s - cur;

        // Distribute the remaining sum across the rest of the array
        for (long p = 1; p < n; p++) {
            // Assign the minimum value to each element while ensuring it doesn't exceed `k-1`
            cur = (rem < (k - 1)) ? rem : (k - 1);
            rem -= cur; // Update the remaining sum
            printf("%lld ", cur); // Print the current element
        }

        puts(""); // Print a newline for the next output
    }

    return 0;
}

