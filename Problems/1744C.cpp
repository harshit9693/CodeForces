#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        char c;
        cin >> n >> c;

        string s;
        cin >> s;

        vector<int> green;
        for (int i = 0; i < n; i++) {
            if (s[i] == 'g') {
                green.push_back(i);
            }
        }

        int maxVal = 0;
        for (int i = 0; i < n; i++) {
            if (s[i] == c) {
                // Find the next green position
                auto it = lower_bound(green.begin(), green.end(), i);
                
                int nextPositionOfGreen;
                if (it == green.end()) {
                    // If no green exists after i, wrap around to the first green
                    nextPositionOfGreen = green[0] + n;
                } else {
                    nextPositionOfGreen = *it;
                }

                // Calculate the distance
                int diff = nextPositionOfGreen - i;
                maxVal = max(maxVal, diff);
            }
        }
        cout << maxVal << endl;
    }

    return 0;
}

