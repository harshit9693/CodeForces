#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{
  ll n, k;
  cin >> n >> k;

  vector<ll> arr(n);
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }

  // Count the frequency of each element
  map<ll, ll> freq_map;
  for (auto it : arr)
  {
    freq_map[it]++;
  }

  // Store the frequencies in a vector
  vector<ll> frequencies;
  for (auto it : freq_map)
  {
    frequencies.push_back(it.second);
  }

  // Sort frequencies in descending order
  sort(frequencies.rbegin(), frequencies.rend());

  // If all elements are the same, f(a) = 1
  if (frequencies.size() == 1)
  {
    cout << 1 << endl;
    return;
  }

  // If `k` is still large enough to handle all remaining groups, set groups to 1
  if (k >= n)
  {
    cout << 1 << endl;
    return;
  }

  ll groups = frequencies.size(); // Initial number of distinct groups
  for (ll i = frequencies.size() - 1; i >= 0; i--)
  {
    if (k >= frequencies[i])
    {
      k -= frequencies[i];
      groups--; // Reduce the number of groups
    }
    else
    {
      break;
    }
  }

  cout << groups << endl;
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
