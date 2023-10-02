	
#include"bits/stdc++.h"
using namespace std;
const int N=0;

// way too long words


int main(){
	int n;
	cin>>n;
	string s;
	for (int i=0;i<n;i++){
		cin>>s;
		int l=s.length();
		
		if (l>10){
			cout<<s[0]<<l-2<<s[l-1]<<endl;
		}
		else{
			cout<<s<<endl;
		}
		
	}
	
	
	return 0;
}
