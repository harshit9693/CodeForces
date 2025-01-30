#include<bits/stdc++.h>
using namespace std;
using ll = long long;


void solve(){

  ll n;
  char ch;
  cin>>n>>ch;

  bool present = true;
  ll ind = -1;
  for(int i=0;i<n;i++){
    char x;
    cin>>x;
    if(x != ch)present = false;
    if(x == ch)ind = i;
  }

  if(present){
    cout<<0<<endl;
  }
  else if(ind == -1){
    cout<<2<<endl;
    cout<<n-1<<" "<<n<<endl;
  }
  else if(ind == n-1){
    cout<<1<<endl;
    cout<<n<<endl;
  }
  else if(ind>=n/2){
    cout<<1<<endl;
    cout<<ind+1<<endl;
  }
  else{
    cout<<2<<endl;
    cout<<n-1<<" "<<n<<endl;
  }

}

int main(){

  int t;
  cin>>t;
  while (t--)
  {
    solve();
  }
  

}