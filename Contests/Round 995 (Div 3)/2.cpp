#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        long long n, a, b, c;
        cin >> n >> a >> b >> c;

        long long sum = a + b + c;

        // Calculate the full rounds
        long long rounds = n / sum;
        long long left = n % sum;
        long long days = rounds * 3; // Each round contributes 3 days

        // Process the leftover part
        if (left > 0) {
            days++; // Use 'a' for one more day
            left -= a;
        }
        if (left > 0) {
            days++; // Use 'b' for one more day
            left -= b;
        }
        if (left > 0) {
            days++; // Use 'c' for one more day
            left -= c;
        }

        cout << days << endl;
    }

    return 0;
}

