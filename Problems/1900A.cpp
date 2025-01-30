#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
  ll n;
  cin>>n;
  string s;
  cin>>s;

  bool found = false;
  int countDot = 0;

  for(int i=0;i<n;i++){
    string temp = s.substr(i,3);
    if(temp == "...")found = true;
    if(s[i] == '.')countDot++;
  }

  if(found){
    cout<<2<<endl;
  }
  else{
    cout<<countDot<<endl;
  }
}

int main(){

  int t;
  cin>>t;

  while(t--){
    solve();
  }
}