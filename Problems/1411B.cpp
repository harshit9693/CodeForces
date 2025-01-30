#include<bits/stdc++.h>
using ll = long long int;
using namespace std;

bool isValid(ll n){

  vector<bool>vec(10,false);
  ll t = n;
  while(n>0){
    vec[n%10]=true;
    n/=10;
  }

  for(int i=1;i<10;i++){
    if(vec[i] == true && t%i != 0)return false;
  }
  return true;
}
int main(){

  int t;
  cin>>t;

  while(t--){
    ll n;
    cin>>n;

    while(true){
      if(isValid(n)){
        cout<<n<<endl;
        break;
      }
      n++;
    }

  }
}