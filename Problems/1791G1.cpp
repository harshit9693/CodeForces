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
    int x;
    cin >> x;
    arr[i] = x + i + 1;
  }

  sort(arr.begin(), arr.end());

  ll total = 0, count = 0;
  for (int i = 0; i < arr.size(); i++)
  {
    if (total + arr[i] <= k)
    {
      total += arr[i];
      count++;
    }
    else
    {
      break;
    }
  }

  cout << count << endl;
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
