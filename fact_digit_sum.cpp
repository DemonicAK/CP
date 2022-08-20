	
	
	
	
#include <bits/stdc++.h>
using namespace std;
	
	
	

	vector<int> FactDigit(int N)
	{
	    // Code here
	    map<int, int> facto;
	    facto[0]=1;
	   facto[1]=1;
	    facto[2]=4;
	    facto[3]=6;
	    facto[4]=24;
	    facto[5]=120;
	    facto[6]=720;
	    facto[7]=5040;
	    facto[8]=40320;
	    facto[9]=362880;
	    
	    
	    vector<int> ans;
	    map<int, int>::iterator itr;


    }
	
int main(){
	
	
	
	
	auto N=6;
	auto ve=Factdigit(N);
	// vector<int> ve ::iterator itr;
    
	for(auto itr=ve.begin();itr!=ve.end();++itr){
		cout<<*itr;
	}

	return 0;
	
}

//unsolved