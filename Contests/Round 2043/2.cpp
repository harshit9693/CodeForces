#include<bits/stdc++.h>
using namespace std;


int main(){
	int t;
	cin>>t;
	
	while(t--){
		long long n,d;
		cin>>n>>d;
		
		//check for all the odd values in the range from 1 to 9
		cout<<1<<" ";
		//condition for 3
		if(n>=3 || d%3 == 0){
			cout<<3<<" ";
		}
		//condition for 5
		if(d%5 == 0){
			cout<<5<<" ";
		}
		//condition for 7
		if(n>=3 || d%7 == 0){
			cout<<7<<" ";
		}
		//condition for 9
		if(n>=6 || (n>=3 && d%3 == 0) || d%9 == 0){
			cout<<9<<" ";
		}
		cout<<endl;
		
	}
}
