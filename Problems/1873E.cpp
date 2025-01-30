#include <bits/stdc++.h>
using namespace std;
using ll = long long;

// Function to calculate the total volume needed to reach the desired height
ll volume(ll mid, const vector<ll> &arr)
{
  ll total = 0;
  for (ll height : arr)
  {
    if (mid > height)
    {
      total += (mid - height);
    }
  }
  return total;
}

void solve()
{
  ll n, x;
  cin >> n >> x;

  // Handle edge cases
  if (n == 0 || x == 0)
  {
    cout << 0 << endl;
    return;
  }

  vector<ll> arr(n);
  for (ll i = 0; i < n; i++)
  {
    cin >> arr[i];
  }

  // Binary search for the maximum possible height
  ll low = 0, high = 2e9 + 7, ans = 0;

  while (low <= high)
  {
    ll mid = low + (high - low) / 2;
    ll requiredVolume = volume(mid, arr);

    if (requiredVolume <= x)
    {
      ans = mid;     // Update the answer
      low = mid + 1; // Try for a higher height
    }
    else
    {
      high = mid - 1; // Try for a lower height
    }
  }

  cout << ans << endl;
}

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t;
  cin >> t;

  while (t--)
  {
    solve();
  }

  return 0;
}
