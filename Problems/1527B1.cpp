#include<bits/stdc++.h>
using namespace std;
using ll = long long;

bool isPallindrome(string s){
  int l = 0,h = s.length()-1;
  while(l<=h){
    if(s[l]!=s[h])return false;
    l++,h--;
  }
  return true;
}

void solve(){
  ll n;
  cin>>n;
  string s;
  cin>>s;

  //bob and alice counter each other zero's until 2 zeros are left
  int cntZeros = 0;
  for(int i=0;i<n;i++){
    if(s[i]=='0')cntZeros++;
  }
  if(cntZeros == 1 || cntZeros%2 == 0){
    cout<<"BOB"<<endl;
  }
  else{
    cout<<"ALICE"<<endl;
  }

}

int main(){

  int t;
  cin>>t;

  while(t--){
    solve();
  }
}