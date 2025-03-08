#include "bits/stdc++.h"
using namespace std;

// https://www.codechef.com/START53D/problems/MAKEABEQUAL

void solve(){
	

long long pos=0,neg=0;
long long n;
cin>>n;
long long a[n];
long long b[n];
for(int i=0;i<n;i++){
	cin>>a[i];
}
for (int i=0;i<n;i++){
	cin>>b[i];
}

for (int i=0;i<n;++i){
	int g=a[i]-b[i];
	if(g>0){
pos+=g;
	}
	else{
		neg+=g;
	}
}
int k=pos+neg;
if(k==0){
	cout<<pos<<"\n";
}
else{
	cout<<-1<<"\n";
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