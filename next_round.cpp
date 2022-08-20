	
	#include<iostream>
using namespace std;
const int N=0;



int main(){
	int n;
	int pos;
	cin>>n;
	
	int arr[n];
	cin>>pos;
	
	for (int j=0;j<n;j++){
		cin>>arr[j];
	}
	
	
	int req=arr[pos-1];
	int selected=0;
	int i=0;
	
	while(arr[i]>=req and i<n){
		if(arr[i]>0){selected++;}
		i++;
	}
	
	cout<<selected;
	return 0;
}
