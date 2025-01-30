#include<bits/stdc++.h>
using namespace std;
using ll = long long;


int main(){

  int t;
  cin>>t;
  while (t--)
  {
    ll n,k;
    cin>>n>>k;
    k--;

    if(n%2 == 0){
      cout<<1+(k%n)<<endl;
    }
    else{
      //we have to find the total number of coinciding points
      //half of the number occurs and there is gap
      //total number of steps = gap + k
      ll totalGaps = k/(n/2);
      //steps
      ll steps = 1+(k+totalGaps)%n;
      cout<<steps<<endl;
    }
  }
  
}