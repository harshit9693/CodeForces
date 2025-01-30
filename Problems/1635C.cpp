#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{
  ll n;
  cin >> n;
  vector<ll> arr(n);
  for (ll i = 0; i < n; i++)
  {
    cin >> arr[i];
  }

  if (arr[n - 2] > arr[n - 1])
  { // If the second last element is greater than the last, sorting isn't possible
    cout << -1 << endl;
    return;
  }

  if (arr[n - 1] < 0)
  { // If the last element is negative, sorting isn't possible
    bool isSorted = true;
    for (int i = 1; i < n; i++)
    {
      if (arr[i] < arr[i - 1])
      { // Check if the array is already sorted
        isSorted = false;
        break;
      }
    }

    if (isSorted)
    {
      cout << 0 << endl; // If sorted, no operations needed
      return;
    }
    else
    {
      cout << -1 << endl;
      return;
    }
  }

  // If the array can be sorted, print the required operations
  cout << n - 2 << endl; // Perform n-2 operations
  for (int i = 0; i < n - 2; i++)
  {
    cout << i+1 << " " << n - 1 << " " << n << endl; // Apply operation on indices (i+1, n-1, n)
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

  return 0;
}
