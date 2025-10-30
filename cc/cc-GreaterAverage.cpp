#include "bits/stdc++.h"
using namespace std;
void solve(){
float a,b,c;
cin>>a >> b>> c;
float d=(a+b)/2;
if(d>c){
	cout<<"YES"<<"\n";
}
else{
	cout<<"NO"<<"\n";
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