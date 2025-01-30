#include<bits/stdc++.h>
using namespace std;


int main(){
	
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		
		string t = s;
		long long count0 = 0,count1 = 0;
		for(int i=0;i<s.length();i++){
			if(s[i] == '0'){
				count0++;
			}
			else{
				count1++;
			}
		}
		
		long long ans = 0;
		for(int i=0;i<s.length();i++){
			if(s[i] == '0'){
				if(count1>0){
					count1--;
				}
				else{
					ans = s.length()-i;
					break;
				}
			}
			else{
				if(count0>0){
					count0--;
				}
				else{
					ans = s.length()-i;
					break;
				}
			}
		}
		cout<<ans<<endl;
	}
	return 0;
}
