#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){

  int t;
  cin>>t;

  while(t--){
    ll n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
      cin>>arr[i];
    }
    sort(arr.rbegin(),arr.rend());
    

    for(auto it:arr){
      cout<<it<<" "; 
    }
    cout<<endl;
  }
}