#include <bits/stdc++.h>
using namespace std;
	




	// solving for single test cases
void solve(){		
	float angle;
	cin>>angle;

	float sides=360/(180-angle);
	int side=360/(180-angle);



	if (side==sides){
		cout<<"YES"<<"\n";

	}

	else{
		cout<<"NO"<<"\n";
	}

	
}





	
int main(){
	int t;
	cin>>t;			// no. of test cases
	while(t){
	solve();
	t--;
	}
	return 0;
}