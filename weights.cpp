


#include "bits/stdc++.h"
using namespace std;
	





void solve(){
	
int w;
int x,y,z;

cin>>w>> x>>y >>z ;

set<int>wei;
wei.insert(x);
wei.insert(y);
wei.insert(z);

wei.insert(x+y);
wei.insert(x+z);
wei.insert(y+z);

wei.insert(x+y+z);

if(wei.count(w)!=0){
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