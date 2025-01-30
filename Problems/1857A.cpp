#include<bits/stdc++.h>
using namespace std;
using ll = long long;


int main(){
  int t;
  cin>>t;

  while(t--){
    ll n;
    cin>>n;
    ll odd = 0,even =0;
    for(ll i=0;i<n;i++){
      ll x;
      cin>>x;
      if(x%2 == 0){
        even++;
      }
      else{
        odd++;
      }
    }
    if(odd>0 && even>0){
      if(odd%2 == 0){
        cout<<"YES"<<endl;
      }
      else{
        cout<<"NO"<<endl;
      }
    }
    else if(odd>0){
      if(odd%2 == 0){
        cout<<"YES"<<endl;
      }
      else{
        cout<<"NO"<<endl;
      }
    }
    else{
      cout<<"YES"<<endl;
    }

  }
}