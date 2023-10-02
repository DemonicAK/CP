
#include <bits/stdc++.h> // Include every standard library
using namespace std;
typedef long long ll;
// https://www.spoj.com/problems/TEST/
void usaco(string filename = "")
{
    if (filename.size() > 0)
    {
#ifndef ONLINE_JUDGE
        freopen((filename + ".in").c_str(), "r", stdin);
        freopen((filename + ".out").c_str(), "w", stdout);
#endif
    }
    else
    {
#ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
        freopen("error.txt", "w", stderr);
#endif
    }
}
int main(){
// bool j=true;
usaco();
while (true){
    int n;cin>>n;
    if(n==42)break;
    cout<<n<<"\n";

}
}