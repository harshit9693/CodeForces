#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{
  ll n, k;
  cin >> n >> k;

  vector<ll> arr(n);
  map<ll, ll> freq;

  for (ll i = 0; i < n; i++)
  {
    cin >> arr[i];
    freq[arr[i]]++;
  }

  ll total = 0;

  for (auto it : freq)
  {
    ll num = it.first;
    ll complement = k - num;

    if (freq.find(complement) != freq.end())
    {
      if (num == complement)
      {
        total += freq[num] / 2;
      }
      else
      {
        total += min(freq[num], freq[complement]);
      }
      freq[num] = 0;
      freq[complement] = 0;
    }
  }

  cout << total << endl;
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
