#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{

  ll n, q;
  cin >> n >> q;

  vector<ll> arr(n), brr;
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }

  for (int i = 0; i < q; i++)
  {
    int x;
    cin >> x;
    if (brr.empty() || brr.back() > x)
    {
      // since hm add usse half kr rhe hai to usse bda kabhi usko divide nhi kryega
      brr.push_back(x);
    }
  }

  // Logic that if the number is divisible by 16 then we will add 8 so it will must be divisible by 8 next time same for others
  vector<ll> compute(brr.size());
  ll prev = 0;

  for (ll i = brr.size() - 1; i >= 0; i--)
  {
    prev += pow(2, brr[i] - 1);
    compute[i] = prev;
  }

  // now we will traverse the main array and find the maximum additon we can get
  for (ll i = 0; i < n; i++)
  {
    for (ll j = 0; j < brr.size(); j++)
    {
      ll x = pow(2, brr[j]);
      if (arr[i] % x == 0)
      {
        arr[i] = arr[i] + compute[j];
        break;
      }
    }
  }

  for (auto it : arr)
  {
    cout << it << " ";
  }
  cout << endl;
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