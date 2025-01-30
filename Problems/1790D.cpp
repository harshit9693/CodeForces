#include <bits/stdc++.h>
using ll = long long;
using namespace std;

void solve()
{

  ll n;
  cin >> n;
  vector<ll> arr(n);
  for (ll i = 0; i < n; i++)
  {
    cin >> arr[i];
  }

  sort(arr.begin(), arr.end());
  // I have used to min priority queue to keep all the minimum element at the top of the pq and accessible in the O(1) time
  priority_queue<ll, vector<ll>, greater<ll>> pq;
  map<ll, ll> mp;
  pq.push(arr[0]);
  mp[arr[0]]++;
  for (ll i = 1; i < n; i++)
  {
    if (arr[i] != arr[i - 1])
    {
      pq.push(arr[i]);
    }
    mp[arr[i]]++;
  }

  ll totalCount = 0;

  while (!pq.empty())
  {
    ll front = pq.top();
    if (mp.find(front) == mp.end())
    {
      pq.pop();
    }
    if (mp.find(front) != mp.end())
    {
      totalCount++;
      while (mp.find(front) != mp.end())
      {
        mp[front]--;
        if (mp[front] == 0)
        {
          mp.erase(front);
        }
        front = front + 1;
      }
    }
  }
  cout << totalCount << endl;
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