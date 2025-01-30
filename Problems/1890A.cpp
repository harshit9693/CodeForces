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

  map<ll, ll> mp;
  for (auto it : arr)
  {
    mp[it]++;
  }
  if (mp.size() == 1)
  {
    cout << "YES" << endl;
    return;
  }
  if (mp.size() > 2)
  {
    cout << "NO" << endl;
    return;
  }
  else
  {
    vector<ll>temp;
    for(auto it:mp){
      temp.push_back(it.second);
    }
    if(abs(temp[0]-temp[1])>1){
      cout<<"NO"<<endl;
    }
    else{
      cout<<"YES"<<endl;
    }
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