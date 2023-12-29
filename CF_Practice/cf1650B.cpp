#include <bits/stdc++.h>
using namespace std;
	
int func(int x,int a){
	int b=x/a;
	int c=x%a;
	return b+c;
}	
	
int main(){
	int times;
	cin>>times;
	while(times){
		long long low,high,a;
		cin>>low >>high >>a ;
		set<int> great;
		int greatvalue=func(low,a);
		for(int i=low;i<high+1;i++){
			if(func(i,a)>greatvalue){
				// great=i;
				great.insert(i);
			}
		}
		auto itr=great.begin();
		cout<<*itr<<"\n";
		times--;
	}
	
	
	
	// cout<<func(5,4);
	// cout<<func(6,4);
	// cout<<func(7,4);
	// cout<<func(8,4);
	
	
	
	
	return 0;
}