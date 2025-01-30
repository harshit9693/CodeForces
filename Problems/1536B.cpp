#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    ll n;
    cin >> n;
    string s;
    cin >> s;

    string temp = "a";
    while (true) {
        // Check if 'temp' exists as a contiguous substring in 's'
        bool found = false;
        for (int i = 0; i <= n - temp.length(); i++) {
            string sub = s.substr(i, temp.length());
            if (sub == temp) {
                found = true;
                break;
            }
        }

        // If 'temp' is not found, it is the MEX
        if (!found) {
            cout << temp << endl;
            return;
        }

        // Generate the next lexicographical string
        int pos = temp.length() - 1;
        while (pos >= 0 && temp[pos] == 'z') {
            temp[pos] = 'a'; // Reset current position to 'a'
            pos--;           // Move to the previous position
        }

        if (pos < 0) {
            // If all characters are 'z', increase string length
            temp = string(temp.length() + 1, 'a');
        } else {
            temp[pos]++; // Increment character at the current position
        }
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
