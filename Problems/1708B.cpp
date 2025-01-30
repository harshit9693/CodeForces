#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{

  ll n, l, r;
  cin >> n >> l >> r;

  // we have to find the numbers having gcd from 1 to n
  // ai may be same since gcd with different index will give different gcd

  vector<ll>ans;
  ans.push_back(l);

  for(ll i=2;i<=n;i++){
    if(l%i == 0){   //i is itself a factor of l
      ans.push_back(l);
    }
    else{
      //find the nearest number which is greater than l which is divisible by i
      ll x = l/i;
      ll nearestNumber = (x+1)*i;
      if(nearestNumber>r){
        cout<<"NO"<<endl;
        return;
      }
      ans.push_back(nearestNumber);
    }
  }

  cout<<"YES"<<endl;
  for(auto it:ans){
    cout<<it<<" ";
  }
  cout<<endl;


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