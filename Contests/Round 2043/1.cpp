#include <iostream>
#include <unordered_map>
using namespace std;

unordered_map<long long, long long> memo;

long long maxCoins(long long n) {
    if (n <= 3) {
        return 1;
    }
    if (memo.find(n) != memo.end()) {
        return memo[n];
    }
    return memo[n] = maxCoins(n / 4) + maxCoins(n / 4);
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        long long n;
        cin >> n;
        memo.clear();
        cout << maxCoins(n) << endl;
    }

    return 0;
}

