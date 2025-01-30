#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    ll m, n;
    cin >> m >> n;
    string s;
    cin >> s;

    vector<vector<ll>> arr(m, vector<ll>(n));
    for (ll i = 0; i < m; i++) {
        for (ll j = 0; j < n; j++) {
            cin >> arr[i][j];
        }
    }

    // Initialize the index vector to mark the cells to be adjusted
    vector<vector<bool>> ind(m, vector<bool>(n, false));

    // Mark the indices based on the path described by string s
    ll x = 0, y = 0;
    ind[x][y] = true;

    for (ll i = 0; i < s.length(); i++) {
        if (s[i] == 'D') {
            x++;
        } else if (s[i] == 'R') {
            y++;
        }
        ind[x][y] = true;
    }

    // Adjust the grid to make the sum of each row and each column 0
    for (ll i = 0; i < m; i++) {
        for (ll j = 0; j < n; j++) {
            if (ind[i][j]) {
                ll row_sum = 0, col_sum = 0;

                // Compute the current row sum excluding the marked cells
                for (ll k = 0; k < n; k++) {
                    if (!ind[i][k]) {
                        row_sum += arr[i][k];
                    }
                }

                // Compute the current column sum excluding the marked cells
                for (ll k = 0; k < m; k++) {
                    if (!ind[k][j]) {
                        col_sum += arr[k][j];
                    }
                }

                // Adjust the current cell to balance both row and column sums
                arr[i][j] = -(row_sum + col_sum);
            }
        }
    }

    // Output the adjusted grid
    for (ll i = 0; i < m; i++) {
        for (ll j = 0; j < n; j++) {
            cout << arr[i][j] << " ";
        }
        cout << "\n";
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
