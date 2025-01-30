#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;

        int maxRemainder = 0, evenCount = 0;
        bool isDivisible = false;

        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            x %= k;  // Compute remainder when divided by k

            if (x == 0) {
                isDivisible = true;
            } else {
                maxRemainder = max(maxRemainder, x);
                if (x == 2) {
                    evenCount++;
                }
            }
        }

        if (isDivisible) {
            cout << "0" << endl;
        } else if (k == 4) {
            if (evenCount >= 2) {
                cout << "0" << endl;
            } else if (evenCount >= 1 || maxRemainder == 3) {
                cout << "1" << endl;
            } else {
                cout << "2" << endl;
            }
        } else {
            cout << (k - maxRemainder) << endl;
        }
    }

    return 0;
}

