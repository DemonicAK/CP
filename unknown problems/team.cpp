	

	#include"bits/stdc++.h"

using namespace std;
const int N=0;



int main(){
	int p,v,t;
	int probs;
	int doable=0;
	cin>>probs;
	for (int i=0;i<probs;i++){

		cin>>p>>v>>t;
		int s=p+v+t;
		if(s>=2){
			doable++;
		}
		
	}
	cout <<doable;
	return 0;
}
