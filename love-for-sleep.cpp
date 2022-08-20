#include <bits/stdc++.h>
using namespace std;
	


pair<int,int> time_sub(pair<int,int> t1,pair<int,int> t2)	{
	
	int h,m;
	//t1-t2
	int h1,m1;
	h1=t1.first;
	m1=t1.second;
	// int te1=h1*60+m1;
	int h2,m2;
	h2=t2.first;
	m2=t2.second;
	// int te2=h2*60+m2;
	h=h1-h2;
	m=m1-m2;
		if(h<0){h+=11;}
	if (h>0 and m<0){
		h=h-1;
		m=m+60;
	}
	// int te=te1-te2;
	// if(te>=0){
	// 	h=te/60;
	// 	m=m%60;
	// }
	// else{
	// 	te+=24*60;
	// 	h=te/60;
	// 	m=m%60;
		
	// }
	

	
	pair<int,int> p(h,m);
	return p;

};
int main(){
	
int times;
cin>>times;
while(times){
	pair<int,int> p;
	int n;
	cin>>n;			//no of alarm
	
	pair<int,int> T;    //sleep time
	
	cin>>T.first>>T.second;
	set<pair<int,int>> alarm;
	for (int i=0;i<n;i++){
		int h,m;
		cin>>h>>m;
		pair<int,int> a(h,m);
		alarm.insert(a);
	}
	alarm.insert(T);
	auto it=alarm.find(T);   //sleep time
	auto itend=alarm.end();    //alarm
	itend--;
	
	if (it==itend){
		p=time_sub(*itend,*it);
		
	}
	else{
		p=time_sub(*(it++),*it);
	}
	cout<<p.first<<" "<<p.second<<"\n";
	
	
	
	
	
	
	
	
	
	
	times--;
}

	
	
	
	
	
	
	return 0;
}