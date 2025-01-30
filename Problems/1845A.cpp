#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{

  ll n, k, x;
  cin >> n >> k >> x;

  if (x != 1)
  {
    cout << "YES" << endl;
    cout << n << endl;
    for (ll i = 0; i < n; i++)
    {
      cout << 1 << " ";
    }
    cout << endl;
    return;
  }

  else if (k == 1 || (k == 2 && n % 2 == 1))
  {
    cout << "NO" << endl;
    return;
  }

  else
  {
    cout << "YES" << endl;
    cout << (n / 2) << endl;
    // Print the list
    vector<int> result;
    if (n % 2 == 1)
    {
      cout<<3<<" ";
    }
    else
    {
      cout<<2<<" ";
    }
    for (int i = 0; i < (n / 2 - 1); i++)
    {
      cout<<2<<" ";
    }
    // Output the result
    // for (int i = 0; i < result.size(); i++)
    // {
    //   cout << result[i] << " ";
    // }
    cout << endl;
  }
}

int main()
{
  int t;
  cin >> t;

  while (t--)
  {
    solve();
  }
}