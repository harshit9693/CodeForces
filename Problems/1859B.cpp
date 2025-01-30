#include<bits/stdc++.h>
using namespace std;


int main(){
	
	int t;
	cin>>t;
	
	while(t--){
		int numArrays;
		cin>> numArrays;
		
		vector<pair<long long,long long>>vec(numArrays);
		long long globalMin = LONG_MAX, globalSecondMin = LONG_MAX, globalMinInd = -1;
		
		for(int i=0;i<numArrays;i++){
			int size = 0;
			cin>>size;
			vector<long long>arr(size);
			long long mini = LONG_MAX, secMini = LONG_MAX;
			for(int j=0;j<size;j++){
				cin>>arr[j];
				
				if(arr[j]<mini){
					secMini = mini;
					mini = arr[j];
				}
				else if(arr[j]<secMini){
					secMini = arr[j];
				}
			}
			
			vec[i] = {mini,secMini};
			globalMin = min(globalMin,mini);
			if (secMini < globalSecondMin) {
                globalSecondMin = secMini;
                globalMinInd = i;
            }
		}
		
		long long maxBeauty = 0;
		for(int i=0;i<numArrays;i++){
			if(i == globalMinInd){
				maxBeauty += globalMin;
			}
			else{
				maxBeauty += vec[i].second;
			}
		}
		cout<<maxBeauty<<endl;
	}
	return 0;
}
