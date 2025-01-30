#include<bits/stdc++.h>
using ll = long long;
using namespace std;

int main(){

  int t;
  cin>>t;

  while(t--){
    ll n;
    cin>>n;

    string s;
    cin>>s;

    ll count = 0;
    ll ob = 0;

    for(ll i=0;i<n;i++){
      if(s[i] == '('){
        ob++;
      }
      else{
        ob--;
        if(ob<0){
          count++;
          ob=0;
        }
      }
    }
    cout<<count<<endl;
  }
}