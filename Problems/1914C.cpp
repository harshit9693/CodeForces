#include<bits/stdc++.h>
using ll =  long long ;
using namespace std;


void solve(){

  ll n,k;
  cin>>n>>k;

  vector<ll>a(n),b(n);
  for(int i=0;i<n;i++){
    cin>>a[i];
  }

  for(int i=0;i<n;i++){
    cin>>b[i];
  }

  ll maxiSec = 0, sum = 0;
  ll maxExp = 0;

  for(int i=0;i<min(k,n);i++){
    maxiSec = max(maxiSec,b[i]);
    sum+=a[i];
    ll maxUniqueExp = sum+maxiSec*(k-i-1);
    maxExp = max(maxExp,maxUniqueExp);
  }
  cout<<maxExp<<endl;

}


int main() {
    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}