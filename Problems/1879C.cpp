#include<bits/stdc++.h>
using namespace std;
using ll = long long;


void solve(){

  string s;
  cin>>s;

  //find the block size of each continuious 1 or zero
  vector<ll>blockSize;
  ll n = s.size();

  ll j = 1;
  ll count = 1;

  while(j<n){
    if(s[j] == s[j-1]){
      count++;
      j++;
    }
    else{
      blockSize.push_back(count);
      count=1;
      j++;
    }
  }
  blockSize.push_back(count);

  //total len of final string will be 
  ll k = blockSize.size();
  ll totalRemoval = n-k;

  ll mod = 998244353;
  ll permutations = 1;

  for(ll i=0;i<blockSize.size();i++){
    permutations = (permutations*blockSize[i])%mod;
  }
  //we get the total permutations to choose the correct indexs
  //to erase those indexes we have to multiply with (n-k)!

  ll fact = 1;
  for(ll i=1;i<=totalRemoval;i++){
    fact=(fact*i)%mod;
  }
  cout<<n-k<<" "<<(fact*permutations)%mod<<endl;

}


int main(){

  int t;
  cin>>t;

  while(t--){
    solve();
  }
}