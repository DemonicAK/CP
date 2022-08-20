	
	#include"bits/stdc++.h"
using namespace std;
const int N=0;



int main(){
	int size;
	cin>>size;
	string inp,out=" ";
	cin>>inp;
	int index=0,jump=1;
	while( index<size ){
		
			

	
		
		out+=inp[index];
		
		index=index+jump;
		jump++; 

	}
	cout<<out;
	
	return 0;
}
