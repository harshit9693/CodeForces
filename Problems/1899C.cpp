#include <bits/stdc++.h>
using ll = long long;
using namespace std;

// Kadane's Algorithm
void solve()
{
  ll n;
  cin >> n;

  vector<ll> arr(n);
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }

  ll maxSum = arr[0]; // Initialize maxSum with the first element
  ll sum = arr[0] > 0 ? arr[0] : 0;

  for (ll i = 1; i < n; i++)
  {
    // Check if the parity of consecutive elements is the same
    if (((arr[i] ^ arr[i - 1]) & 1) == 0)
    {
      // Reset sum if elements have the same parity
      sum = arr[i] > 0 ? arr[i] : 0;
    }
    else
    {
      // Add to sum if elements have different parity
      sum += arr[i];
    }

    // Update maxSum with the current sum
    maxSum = max(maxSum, sum);

    // Reset sum to 0 if it becomes negative
    if (sum < 0)
    {
      sum = 0;
    }
  }

  // Handle the case where all elements are negative
  ll maxElement = *max_element(arr.begin(), arr.end());
  if (maxElement < 0)
  {
    maxSum = maxElement;
  }

  cout << maxSum << endl;
}

int main()
{
  int t;
  cin >> t;

  while (t--)
  {
    solve();
  }

  return 0;
}
