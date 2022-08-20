#include <bits/stdc++.h>
using namespace std;
	
	
int main(){

	
	int n;
	cin>>n;
	int x=0;
	while(n){
		string seq;
		cin>>seq;
		
		
		if (seq=="X++"){x++;}
		else if(seq=="++X" ){x++;}
		else if( seq=="+X+"){x++;}
		else if(seq =="X--" ){x-=1;}
		else if( "--X" ){x=x-1;}
		else if("-X-"){x-=1;}
		
		
		else{
			cout<<"invalid"<<"\n";
		}
		
		
		
		n--;
	}
	
	cout<<x;
	
	
	return 0;
}