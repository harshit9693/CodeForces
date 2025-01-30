#include <bits/stdc++.h>
using namespace std;
using ll = long long;

bool isPalindromeAfterRemovingElement(const vector<ll>& arr, ll n, ll skipElement) {
    ll i = 0, j = n - 1;
    while (i < j) {
        if (arr[i] == arr[j]) {
            ++i;
            --j;
        } else if (arr[i] == skipElement) {
            ++i;
        } else if (arr[j] == skipElement) {
            --j;
        } else {
            return false;
        }
    }
    return true;
}

void solve() {
    ll n;
    cin >> n;
    vector<ll> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    ll i = 0, j = n - 1;

    // Find the first mismatch
    while (i < j && arr[i] == arr[j]) {
        ++i;
        --j;
    }

    // If no mismatch is found, it's already a palindrome
    if (i >= j) {
        cout << "YES" << endl;
        return;
    }

    // Check if removing one of the mismatched elements makes it a palindrome
    if (isPalindromeAfterRemovingElement(arr, n, arr[i]) || isPalindromeAfterRemovingElement(arr, n, arr[j])) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}
