    
    
    
#include"bits/stdc++.h" 
    
using namespace std;   
    
    
    
    vector<int> subarraySum(int arr[], int n, long long s)
    {
        // Your code here
        int a=0;//index
        int b=1;//index
        int sum=arr[a];
        vector<int> ve;
        while(sum!=s and b<n and a<n){
          
           
            if(sum>s ){sum=sum-arr[a];a++;}
            if (sum<s){b++; sum+=arr[b];}

        }
                    if(sum==s){a++;b++;
                ve.push_back(a);
                ve.push_back(b);
            }
            return ve;
    }
    
    
int main(){
    int n,s;
    
    int arr[n];
    cin>>n>>s;
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    vector<int> veve=subarraySum(arr,n,s);
    
    for (int i=0;i<2;i++){
        cout<<veve[i]<<"  ";
    }
    return 0;
}