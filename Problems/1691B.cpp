#include <bits/stdc++.h>
using ll = long long;
using namespace std;

int main()
{
  int t;
  cin >> t;

  while (t--)
  {
    ll n;
    cin >> n;

    vector<ll> arr(n);
    for (ll i = 0; i < n; i++)
    {
      cin >> arr[i];
    }

    vector<ll> result;
    arr.push_back(1e9 + 7); // Adding a large value to simplify the boundary condition
    ll segmentSize = 1;
    bool possible = true;

    for (ll i = 1; i <= n; i++)
    {
      // If the segment continues, increment its size
      if (arr[i] == arr[i - 1])
      {
        ++segmentSize;
        continue;
      }

      // If a segment of size 1 is found, it's invalid
      if (segmentSize == 1)
      {
        possible = false;
        break;
      }

      // Add indices for the current segment in reversed order
      result.push_back(i);
      for (ll j = i - segmentSize; j < i - 1; j++)
      {
        result.push_back(j + 1);
      }

      segmentSize = 1; // Reset segment size
    }

    // Output the result
    if (possible)
    {
      for (ll i = 0; i < result.size(); i++)
      {
        cout << result[i] << " ";
      }
      cout << endl;
    }
    else
    {
      cout << -1 << endl;
    }
  }

  return 0;
}
