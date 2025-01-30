#include<bits/stdc++.h>
using namespace std;
using ll = long long;


int main(){

  int t;
  cin>>t;

  while(t--){

    ll n;
    cin>>n;
    vector<ll>arr(n);
    for(int i=0;i<n;i++){
      cin>>arr[i];
    }

    vector<ll>pre(n+1,0);
    for(int i=0;i<n;i++){
      pre[i+1] = pre[i]+arr[i];
    }

    //we can always split in the 2 only multiple will change
    ll maxScore = 1;
    for(int i=1;i<n;i++){
      ll gcd = __gcd(pre[i],pre[n]-pre[i]);
      maxScore = max(maxScore,gcd);
    }
    cout<<maxScore<<endl;

  }
}