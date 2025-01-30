#include<bits/stdc++.h>
using namespace std;


int main(){

  int t;
  cin>>t;

  while(t--){

    string s;
    cin>>s;

    set<char>unique;

    for(auto it:s){
      unique.insert(it);
    }

    int size = unique.size();
    if(size == 1){
      cout<<"yes"<<endl;
      continue;
    }
    else{
       bool res = true;
      for(long p = size; res && p < s.size(); p++){
            if(s[p - size] != s[p]){res = false;}
        }
        puts(res ? "yes" : "no");
    }

  }
}