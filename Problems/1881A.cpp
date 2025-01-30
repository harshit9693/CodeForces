#include <bits/stdc++.h>
using namespace std;

// Function to check if string `s` is a substring of `x`
bool isSubstring(const string& x, const string& s) {
    return x.find(s) != string::npos;
}

void solve() {
    int n, m;
    cin >> n >> m;

    string x, s;
    cin >> x >> s;

    string concatenated = x;
    int operations = 0;

    // Perform concatenations and check for the substring
    while (concatenated.length() <= n * m) {
        if (isSubstring(concatenated, s)) {
            cout << operations << endl; // Return the number of operations
            return;
        }
        concatenated = concatenated+concatenated; // Concatenate `x` to itself
        operations++;
    }
    if(isSubstring(concatenated, s)){
      cout<<operations<<endl;
      return;
    }

    // If no substring found after maximum possible length
    cout << -1 << endl;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}
