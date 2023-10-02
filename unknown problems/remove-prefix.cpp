
#include <bits/stdc++.h>
using namespace std;
	
	
int main(){
int t;
cin>>t;
while(t){
	
	int s;
	cin>>s;
	int arr[s];
	for(int i=0;i<s;i++){
		cin>>arr[i];
	}
	set<int> chk;
	for (int i=s-1;i>=0;i--){
		
		if(chk.count(arr[i])==0){
			chk.insert(arr[i]);
		}
		else{
			cout<<i+1<<"\n";
			break;
		}
	if (chk.size()==s){
		cout<<0<<"\n";
	}
	
	}
	
	
	t--;
}
	
	
	
	
	
	
	return 0;
}