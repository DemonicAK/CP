#include "bits/stdc++.h"
using namespace std;
	

bool divideby4chk(int a,int b,int k){
	long long val=(a+k)*b;
	if (val%4==0){
		return true;
	}
	return false;
}



void solve(){
	int n,k;
	cin>>n>>k;
vector<int> nums;
for (int i=1;i<=n;++i){
	nums.push_back(i);
}

vector <pair<int,int>> ans;
set<int> nu;
for (int i=0;i<n;++i){
	for(int j=i+1;j<n;++j){
					int a=nums[i];
			int b=nums[j];
			pair<int,int> p(a,b);


		if(nu.count(a)==0 and nu.count(b)==0 and divideby4chk(a,b,k)){
			nu.insert(a);
			nu.insert(b);

			ans.push_back(p);

			break;


		}

	}
	// break;
}
if (ans.empty()){
	cout<<"NO"<<"\n";
}
else{
	cout<<"YES"<<"\n";
	for(auto i: ans){
		cout<<i.first<< " "<<i.second<<"\n";
	}
	
}






	
}





	
int main(){
	int t;
	cin>>t;
	while(t){
	solve();
	t--;
	}
	return 0;
}