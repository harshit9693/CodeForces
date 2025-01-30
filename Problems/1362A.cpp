#include<bits/stdc++.h>
using ll = long long int;
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        ll a, b;
        cin >> a >> b;

        // Edge case: Zero or negative inputs
        if (a <= 0 || b <= 0) {
            cout << -1 << endl;
            continue;
        }

        if (a == b) {
            cout << 0 << endl;
            continue;
        }

        ll count = 0;
        bool possible = true;

        if (a < b) {
            // Multiply a to reach b
            while (a < b) {
                if (a * 8 <= b) {
                    count++;
                    a *= 8;
                } else if (a * 4 <= b) {
                    count++;
                    a *= 4;
                } else if (a * 2 <= b) {
                    count++;
                    a *= 2;
                } else {
                    break;
                }
            }
        } else {
            // Divide a to reach b
            while (a > b) {
                if (a % 8 == 0 && a / 8 >= b) {
                    count++;
                    a /= 8;
                } else if (a % 4 == 0 && a / 4 >= b) {
                    count++;
                    a /= 4;
                } else if (a % 2 == 0 && a / 2 >= b) {
                    count++;
                    a /= 2;
                } else {
                    break;
                }
            }
        }

        // Final check
        if (a == b) {
            cout << count << endl;
        } else {
            cout << -1 << endl;
        }
    }

    return 0;
}
