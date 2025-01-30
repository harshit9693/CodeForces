#include <bits/stdc++.h>
using namespace std;
using ll = long long;


void solve() {
    vector<string>vec(10);
    for(int i=0;i<10;i++){
      string s;
      cin>>s;
      vec[i] = s;
    }
    ll totalScore = 0;
    for(int i=0;i<10;i++){
      for(int j=0;j<10;j++){
        if(i == 0 || j == 0 || i== 9 || j == 9){
          if(vec[i][j] == 'X')totalScore+=1;
        }
        else if(i == 1 || j == 1 || i== 8 || j == 8){
          if(vec[i][j] == 'X')totalScore+=2;
        }
        else if(i == 2 || j == 2 || i== 7 || j == 7){
          if(vec[i][j] == 'X')totalScore+=3;
        }
        else if(i == 3 || j == 3 || i== 6 || j == 6){
          if(vec[i][j] == 'X')totalScore+=4;
        }
        else if(i == 4 || j == 4 || i== 5 || j == 5){
          if(vec[i][j] == 'X')totalScore+=5;
        }
      }
    }
    cout<<totalScore<<endl;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}
