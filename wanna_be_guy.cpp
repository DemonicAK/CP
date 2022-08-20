	#include"bits/stdc++.h"
	using namespace std;
const int N=0;



int main(){
	
	int total;
	cin>>total;
	
	set<int> levels;
	// set<int> lv;
	
	
	int x;
	cin>> x;
	for (int i=0;i<x;i++){
		int level;
		cin>>level;
		levels.insert(level);
	}
	
	
	int y;
	cin>>y;
	
		for (int i=0;i<y;i++){
			int level;
		cin>>level;
		levels.insert(level);
	}
	

	int flag=1;
for (int i=1;i<total+1;i++){
	auto it=levels.find(i);
	if (it==levels.end()){flag=0;break;}
	else{flag=1;}
	
}
if(flag==0){cout<<"Oh, my keyboard!"<<endl;}
else{cout<<"I become the guy."<<endl;}

	
	return 0;
}
