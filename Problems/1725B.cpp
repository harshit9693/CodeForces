#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n, d;
    cin >> n >> d;

    vector<long long> vec(n);
    for (long long i = 0; i < n; i++) {
        cin >> vec[i];
    }

    // Sort in descending order
    sort(vec.begin(), vec.end(), greater<long long>());

    long long totalTeams = 0, candidatesLeft = n;

    for (long long i = 0; i < n; i++) {

        long long required = 1+ d/ vec[i]; // Equivalent to ceil(d / vec[i])
        if (required > candidatesLeft) {
            break;
        }
        candidatesLeft -= required;
        totalTeams++;
    }

    cout << totalTeams << endl;
    return 0;
}

