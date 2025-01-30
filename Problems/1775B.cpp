#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){

  ll n;
  cin>>n;
  vector<vector<ll>>vec(n);
  map<int,int>mp;
  for(ll i=0;i<n;i++){
    ll x;
    cin>>x;
    vector<ll>temp;
    while(x--){
      ll y;
      cin>>y;
      mp[y]++;
      temp.push_back(y);
    }
    vec[i]=temp;
  }

  //now traverse in the 2D vector and if we found any number which has setbits >= 2 for all the bits then we can remove that number

  for(auto &bits : vec){
    bool possible = true;
    for(auto &bit:bits){
      if(mp[bit] == 1){
        possible = false;
        break;
      }
    }
    if(possible){
      cout<<"YES"<<endl;
      return;
    }
  }
  cout<<"NO"<<endl;
}


int main(){
  int t;
  cin>>t;

  while(t--){
    solve();
  }
}