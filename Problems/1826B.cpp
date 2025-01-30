#include <bits/stdc++.h>
using ll = long long;
using namespace std;

void solve() {
    ll n;
    cin >> n;
    vector<ll> arr(n);
    for (ll i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Check if the array is already a palindrome
    bool isPalindrome = true;
    for (int i = 0; i < n / 2; i++) {
        if (arr[i] != arr[n - i - 1]) {
            isPalindrome = false;
            break;
        }
    }

    if (isPalindrome) {
        cout << 0 << endl;
        return;
    }

    // Calculate GCD of differences of mismatched elements
    ll k = 0;  // Initialize as 0 to allow GCD calculation
    for (ll i = 0; i < n / 2; i++) {
        ll diff = abs(arr[i] - arr[n - i - 1]);
        if (diff != 0) {  // Avoid adding 0 to GCD calculation
            k = __gcd(k, diff);
        }
    }

    cout << k << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
