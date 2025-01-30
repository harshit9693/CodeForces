#include <bits/stdc++.h>
using namespace std;
using ll = long long;

// Function to find the leftmost set bit position (0-based index)
int leftmostSetBitPosition(int n)
{
  if (n == 0)
    return -1;         // No set bits for 0
  return (int)log2(n); // Use logarithm to get the leftmost set bit position
}

void solve()
{
  ll n;
  cin >> n;
  vector<ll> arr(n);
  for (ll i = 0; i < n; i++)
  {
    cin >> arr[i];
  }

  // Create a frequency array for leftmost set bit positions
  vector<int> vec(32, 0);

  for (ll i = 0; i < n; i++)
  {
    // Find the position of the leftmost set bit
    ll pos = leftmostSetBitPosition(arr[i]);
    if (pos >= 0)
    {
      vec[pos]++;
    }
  }

  // Calculate the total number of pairs
  ll totalPairs = 0;
  for (int i = 0; i < vec.size(); i++)
  {
    if (vec[i] >= 2)
    {
      totalPairs += (1LL * vec[i] * (vec[i] - 1)) / 2;
    }
  }

  cout << totalPairs << endl;
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
