#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{
  ll n, k;
  cin >> n >> k;

  vector<vector<ll>> arr(n, vector<ll>(n));
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      cin >> arr[i][j];
    }
  }
  ll totalDistinct = 0;
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      if (arr[i][j] != arr[n - i - 1][n - j - 1])
      {
        totalDistinct++;
      }
    }
  }

  totalDistinct /= 2;
  if ((k < totalDistinct) || (((k - totalDistinct) % 2) && (n % 2 == 0)))
  {
    cout << "NO" << endl;
  }
  else
    cout << "YES" << endl;
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
