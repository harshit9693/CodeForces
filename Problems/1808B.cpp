#include <bits/stdc++.h>
using namespace std;
using ll = long long;

// Function to calculate the sum of absolute differences for a sorted array
long long sumOfAbsoluteDifferences(vector<ll>& arr) {
    int n = arr.size();
    long long totalSum = 0;
    long long leftSum = 0;
    long long result = 0;

    // Calculate total sum of the array
    for (int i = 0; i < n; ++i) {
        totalSum += arr[i];
    }

    // Iterate through each element to calculate its contribution
    for (int i = 0; i < n; ++i) {
        long long rightSum = totalSum - leftSum - arr[i];
        
        // Contribution as the larger element
        result += (i * arr[i]) - leftSum;
        
        // Contribution as the smaller element
        result += rightSum - ((n - i - 1) * arr[i]);
        
        // Update leftSum for the next iteration
        leftSum += arr[i];
    }

    return result;
}
long long sumOfAbsoluteDifferences2(const vector<ll>& arr) {
    int n = arr.size();
    vector<long long> prefixSum(n, 0);
    prefixSum[0] = arr[0];
    
    // Compute prefix sum
    for (int i = 1; i < n; ++i) {
        prefixSum[i] = prefixSum[i - 1] + arr[i];
    }
    
    long long totalSum = prefixSum[n - 1];
    long long result = 0;
    
    // Compute contribution for each element
    for (int i = 0; i < n; ++i) {
        long long leftSum = (i > 0) ? prefixSum[i - 1] : 0;
        long long rightSum = totalSum - prefixSum[i];
        
        result += (i * (long long)arr[i]) - leftSum; // Contribution as larger element
        result += rightSum - ((n - i - 1) * (long long)arr[i]); // Contribution as smaller element
    }
    
    return result;
}
// Function to solve a single test case
void solve() {
    ll n, m;
    cin >> n >> m;

    vector<vector<ll>> arr(n, vector<ll>(m));

    // Input the 2D array
    for (ll i = 0; i < n; i++) {
        for (ll j = 0; j < m; j++) {
            cin >> arr[i][j];
        }
    }

    ll total = 0;

    // Process each column
    for (ll col = 0; col < m; col++) {
        vector<ll> temp;

        // Extract the column into a temporary array
        for (ll row = 0; row < n; row++) {
            temp.push_back(arr[row][col]);
        }

        // Sort the column
        sort(temp.begin(), temp.end());

        // Calculate the sum of absolute differences for the column
        total += sumOfAbsoluteDifferences2(temp);
    }

    // Output the total sum
    cout << total/2 << endl;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}
