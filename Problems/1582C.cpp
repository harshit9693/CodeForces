#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    ll n;
    cin >> n;
    string s;
    cin >> s;

    // Find the characters which are possible to not make a palindrome
    ll low = 0, high = n - 1;
    while (low <= high) {
        if (s[low] != s[high]) {
            break;
        }
        low++, high--;
    }

    if (low > high) {
        cout << 0 << endl;
        return;
    }

    // Characters at low and high are possible candidates for the answer
    char first = s[low];
    ll minLenFirst = 0;
    ll i = 0, j = n - 1;
    bool notPossibleFirst = false;

    while (i <= j) {
        if (s[i] != s[j]) {
            if (s[i] == first) {
                i++;
            } else if (s[j] == first) {
                j--;
            } else {
                notPossibleFirst = true;
                break;
            }
            minLenFirst++;
        } else {
            i++, j--;
        }
    }

    char second = s[high];
    ll minLenSec = 0;
    i = 0, j = n - 1;
    bool notPossibleSec = false;

    while (i <= j) {
        if (s[i] != s[j]) {
            if (s[i] == second) {
                i++;
            } else if (s[j] == second) {
                j--;
            } else {
                notPossibleSec = true;
                break;
            }
            minLenSec++;
        } else {
            i++, j--;
        }
    }

    if (notPossibleFirst && notPossibleSec) {
        cout << -1 << endl;
    } else if (notPossibleFirst) {
        cout << minLenSec << endl;
    } else if (notPossibleSec) {
        cout << minLenFirst << endl;
    } else {
        cout << min(minLenFirst, minLenSec) << endl;
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
