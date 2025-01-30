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
    for(ll i=0;i<n;i++){
      cin>>arr[i];
    }
    sort(arr.begin(),arr.end());
    ll last = arr[n-1];
    ll ind = -1;
    for(int i=n-2;i>=0;i--){
      if(arr[i] != last){
        ind = i;
        break;
      }
    }
    if(ind == -1){
      cout<<-1<<endl;
      continue;
    }
    else{
      cout<<ind+1<<" "<<n-ind-1<<endl;
      for(int i=0;i<=ind;i++){
        cout<<arr[i]<<" ";
      }
      cout<<endl;
      for(int i=ind+1;i<n;i++){
        cout<<arr[i]<<" ";
      }
      cout<<endl;
    }

  }
}